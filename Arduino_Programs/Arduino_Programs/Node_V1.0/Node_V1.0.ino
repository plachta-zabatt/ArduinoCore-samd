//#include "pins_arduino.h"
#include <lorawan.h>

// OTAA credentials
const char *devEui = "3534353165375300";
const char *appEui = "0000000000000000";
const char *appKey = "d9988a5f02d80fab8ba5f453c4a2cd2b";

const unsigned long interval = 5000;    // 10 s interval to send message
unsigned long previousMillis = 0;  // will store last time message sent
unsigned int counter = 0;     // message counter


char outStr[255];
byte recvStatus = 0;

const sRFM_pins RFM_pins = {
  .CS = SS,
  .RST = RFM_RST,
  .DIO0 = RFM_DIO0,
  .DIO1 = RFM_DIO1,
  .DIO2 = RFM_DIO2,
  .DIO5 = RFM_DIO5,
};


#define SELPIN 13 //Selection Pin 
#define DATAOUT PIN_SPI1_MISO //MOSI 
#define DATAIN  PIN_SPI1_MOSI//MISO 
#define SPICLOCK  PIN_SPI1_SCK//Clock 

int ADCchannel[8][5] = {{1, 1, 0, 0, 0}, {1, 1, 0, 0, 1}, {1, 1, 0, 1, 0},
                      {1, 1, 0, 1, 1}, {1, 1, 1, 0, 0}, {1, 1, 1, 0, 1},
                      {1, 1, 1, 1, 0}, {1, 1, 1, 1, 1}};

int readvalue;
char myStr[11] = "0123456789";


void setup() {
  //set pin modes
  Serial.begin(9600);
  Serial.println("BEGIN");
  if (!lora.init()) {
    Serial.println("RFM95 not detected");
    delay(1000);
    return;
  }

  lora.setDeviceClass(CLASS_A); // Set LoRaWAN Class change CLASS_A or CLASS_C
  lora.setTxPower(15,PA_BOOST_PIN);
  lora.setDataRate(SF10BW125);// Set Data Rate
  lora.setChannel(CH0);// set channel to random

  lora.setDevEUI(devEui);// Put OTAA Key and DevAddress here
  lora.setAppEUI(appEui);
  lora.setAppKey(appKey);

  // Join procedure
  bool isJoined;
  do {
    Serial.println("Joining...");
    isJoined = lora.join();
    //wait for 10s to try again
    delay(1000);
  } while (!isJoined);
  Serial.println("Joined to network");

  pinMode(SELPIN, OUTPUT);
  pinMode(DATAOUT, OUTPUT);
  pinMode(DATAIN, INPUT);
  pinMode(SPICLOCK, OUTPUT);
  //disable device to start with
  digitalWrite(SELPIN, HIGH);
  digitalWrite(DATAOUT, LOW);
  //delay(50000);
  digitalWrite(SPICLOCK, HIGH);
}



int read_adc(int channel) {
  int adcvalue = 0;
  int readADC[5];

  for (int i = 0; i < 8; i++) {
    if (channel == i) {
      for (int j = 0; j < 5; j++) {
        readADC[j] = ADCchannel[i][j];
      }
    }
  }
  digitalWrite(SELPIN, LOW); //Select adc

  for (int i = 0; i < 5; i++) {
    // Serial.print(readADC[i]);
    digitalWrite(DATAOUT, readADC[i]);
    //cycle clock
    digitalWrite(SPICLOCK, HIGH);
    digitalWrite(SPICLOCK, LOW);
  }
  //Serial.println(" ");
  digitalWrite(SPICLOCK, HIGH);   //ignores 2 null bits
  digitalWrite(SPICLOCK, LOW);
  digitalWrite(SPICLOCK, HIGH);
  digitalWrite(SPICLOCK, LOW);
  //Serial.print("DATA IN: ");

  //read bits from adc
  for (int i = 11; i >= 0; i--) {
    //Serial.print(digitalRead(DATAIN));
    
    //Serial.print("DATA IN: ");
    //Serial.println(digitalRead(DATAIN) << i);
    adcvalue += digitalRead(DATAIN) << i;
    //Serial.print("ADC VALUE: ");
    //Serial.println(adcvalue);
    //cycle clock
    digitalWrite(SPICLOCK, HIGH);
    digitalWrite(SPICLOCK, LOW);
  }
  digitalWrite(SELPIN, HIGH); //turn off device
  return adcvalue;
}

int readACVoltage(int channel) {

  int loopLength = 200;
  int acVolts = 0;
  int acVoltsArray[loopLength];
  int acVoltsSum = 0;
  int acVoltsMax = 0;
  int acVoltsMin = 4095;

  for (int i = 0; i < loopLength; i++) {
    acVoltsArray[i] = read_adc(channel);
    acVoltsSum += acVoltsArray[i];
    
    if (acVoltsArray[i] > acVoltsMax) {
      acVoltsMax = acVoltsArray[i];
    }
    if (acVoltsArray[i] < acVoltsMin) {
      acVoltsMin = acVoltsArray[i];
    }
    Serial.println(acVoltsArray[i]);
    //delay(10);
  }

  Serial.print("AC VOLTS Max: ");
  Serial.println(acVoltsMax);
  Serial.print("AC VOLTS Min: ");
  Serial.println(acVoltsMin);
  Serial.print("AC VOLTS Difference: ");
  Serial.println(acVoltsMax-acVoltsMin);
  //Serial.print("AC VOLTS SUM: ");
  //Serial.println(acVoltsSum);

  acVolts = acVoltsSum / loopLength;

  Serial.print("AC VOLTAGE: ");
  Serial.println(22.6807 + (0.126515 *(acVoltsMax-acVoltsMin)) - (0.00000115746 * pow(acVoltsMax-acVoltsMin, 2)));

  return acVolts;
}


void loop() {

  readACVoltage(1);
  delay(2000);

  //int number = 33;
  //char myStr[230];
  //sprintf(myStr, "%d", readvalue);

  //char* myStr = (char*)readvalue;
  //sprintf(myStr, readvalue);

  //Serial.print("ADC String 1: ");
  //Serial.println(myStr);

  // Check interval overflow
  if (millis() - previousMillis > interval) {
    previousMillis = millis();

    //sprintf(myStr, "Counter-%d", counter);

    Serial.print("Sending: ");
    Serial.println(myStr);


    lora.sendUplink(myStr, strlen(myStr), 0, 1);
    counter++;
  }
  // Check Lora RX
  lora.update();

  //Serial.println("We Made IT1");
  recvStatus = lora.readData(outStr);
  //Serial.println(outStr);
  if (recvStatus) {
    Serial.println(outStr);
  }

  // Check Lora RX
  lora.update();
}
