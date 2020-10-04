/**
  Example of OTAA device
  Authors:
         Ivan Moreno
         Eduardo Contreras
   June 2019

  This code is beerware; if you see me (or any other collaborator
  member) at the local, and you've found our code helpful,
  please buy us a round!
  Distributed as-is; no warranty is given.
*/
#include <lorawan.h>
#include <assert.h>
#include <ArduinoJson.h>


// OTAA credentials
const char *devEui = "93311b1e9d70fec6";
const char *appEui = "0000000000000000";
const char *appKey = "d9988a5f02d80fab8ba5f453c4a2cd2b";

const unsigned long interval = 5000;    // 10 s interval to send message
unsigned long previousMillis = 0;  // will store last time message sent
unsigned int counter = 0;     // message counter
unsigned int str_len;

char myStr[255];
char* aStr;
StaticJsonDocument<230> output;
StaticJsonDocument<230> input;

char outStr[268];
byte recvStatus = 0;

const sRFM_pins RFM_pins = {
  .CS = SS,
  .RST = RFM_RST,
  .DIO0 = RFM_DIO0,
  .DIO1 = RFM_DIO1,
  .DIO2 = RFM_DIO2,
  .DIO5 = RFM_DIO5,
};

void setup() {
  // Setup loraid access
  Serial.begin(115200);
  delay(2000);


  if (!lora.init()) {
    Serial.println("RFM95 not detected");
    delay(10000);
    return;
  }

  // Set LoRaWAN Class change CLASS_A or CLASS_C
  /*
     Throws some pins, sets values in certain registers to say 'Hey, we are going to send something'
  */
  lora.setDeviceClass(CLASS_A);

  // Set Data Rate
  /*
    Define settings in LoRa_Settings (Datarate_Tx and Datarate_Rx (tx+0x0a)
    SF10BW125   = 0x00,
    SF9BW125    = 0x01,
    SF8BW125    = 0x02,
    SF7BW125    = 0x03,
  */
  lora.setDataRate(SF7BW125);

  // set channel to random
  /*
     sets LoRa_Settings.Channel_Rx
     Also, when we try to do things like join this setting sets LoRa_Settings.Channel_RX to random(0,8) + 0x08
  */
  lora.setChannel(MULTI);

  // Put OTAA Key and DevAddress here
  lora.setDevEUI(devEui);   // sets deveui and sets RFM_Command_Status = NO_RFM_COMMAND
  lora.setAppEUI(appEui);   // "
  lora.setAppKey(appKey);   // "

  // Join procedure
  /*
  */
  bool isJoined;
  do {
    Serial.println("Joining...");
    isJoined = lora.join(); 

    //wait for 10s to try again
    delay(5000);
  } while (!isJoined);
  Serial.println("Joined to network");
    Serial.println("---------------------------------------");
    Serial.println("---------------------------------------");
    Serial.println();
    Serial.println();
    Serial.println();
    Serial.println();
    Serial.println();

}

void loop() {
  delay(2000);

  // Check interval overflow
  if (millis() - previousMillis > interval) {
    previousMillis = millis();

    output["1"] = 1;
    output["2"] = "TEST";
    output["3"] = 324234234;
    output["4"] = 33;
    output["5"] = 44;
    output["6"] = 1233;
    output["7"] = 1233;
    output["8"] = "A MUCH LONGER STRING?";
    output["9"] = 1233;
    output["10"] = 1212312333;
    output["12"] = 33333333;
    output["16"] = 1233;
    output["17"] = 1233233;
    output["21"] = 1233;
    output["value"] = 1233233;
    output["111"] = 1233233;
    output["311"] = 1233233;
    output["values"] = "Asdasd";

    str_len = serializeJson(output, myStr, 255);
    counter++;
    //sprintf(myStr, "01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789");
    //sprintf(myStr, "Counter-%d", counter);
    //    Serial.println("\n----");
    //    Serial.print("Sending: \n");
    //    Serial.print(str_len);
    //    Serial.print("  :  ");
    //    Serial.print(myStr);
    //    Serial.println();
    //    Serial.println("----");

    lora.sendUplink(myStr, str_len, 0, 1); //Put in memory (buffer_tx) and set flag that says 'we have a msg to send' (RFM_Command_Status = NEW_RFM_COMMAND)
    counter++;
    
    Serial.println(counter);
  }

  recvStatus = lora.readData(outStr);
  if (recvStatus) {

    Serial.println("\n----");
    DeserializationError err = deserializeJson(input, outStr);
    if(err){
      Serial.print("*********err : ");
      Serial.print(err.c_str()); 
      Serial.println();
    }

    Serial.println();
    const char* test = input["1"];
    const char* test2 = input["3"];
    Serial.println((String)"Test :" + test);
    Serial.println((String)"Test2 :" + test2);
    Serial.println("\n----");
  
    Serial.println("\n----");
    Serial.println("---- RECEIVED -------------------");
    Serial.println((String)"OutStr: " + outStr);
    Serial.println("---- RECEIVED -------------------");
    Serial.println("----");
  }

  // Check Lora RX
  lora.update();
  //assert(0);
}
