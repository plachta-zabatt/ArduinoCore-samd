/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#define ARDUINO_MAIN
#include "Arduino.h"
#include "sam.h"


// Weak empty variant initialization function.
// May be redefined by variant files.
void initVariant() __attribute__((weak));
void initVariant() { }

// Initialize C library
extern "C" void __libc_init_array(void);

/*
 * \brief Main entry point of Arduino application
 */
int main( void )
{

  // pinMode(0, INPUT_PULLUP);
  // pinMode(1, INPUT_PULLUP);
  // pinMode(2, INPUT_PULLUP);
  // pinMode(3, INPUT_PULLUP);
  // pinMode(4, INPUT_PULLUP);
  // pinMode(5, INPUT_PULLUP);
  // pinMode(6, INPUT_PULLUP);
  // pinMode(7, INPUT_PULLUP);
  // pinMode(8, INPUT_PULLUP);
  // pinMode(9, INPUT_PULLUP);
  // pinMode(10, INPUT_PULLUP);
  // pinMode(11, INPUT_PULLUP);
  // pinMode(12, INPUT_PULLUP);
  // pinMode(13, INPUT_PULLUP);
  // pinMode(14, INPUT_PULLUP);
  // pinMode(15, INPUT_PULLUP);
  // pinMode(16, INPUT_PULLUP);
  // pinMode(17, INPUT_PULLUP);
  // pinMode(18, INPUT_PULLUP);
  // pinMode(19, INPUT_PULLUP);
  // pinMode(20, INPUT_PULLUP);
  // pinMode(21, INPUT_PULLUP);
  // pinMode(22, INPUT_PULLUP);
  // pinMode(23, INPUT_PULLUP);
  // pinMode(24, INPUT_PULLUP);
  // pinMode(25, INPUT_PULLUP);
  // pinMode(26, INPUT_PULLUP);
  // pinMode(27, INPUT_PULLUP);
  // pinMode(28, INPUT_PULLUP);
  // pinMode(29, INPUT_PULLUP);
  // pinMode(30, INPUT_PULLUP);
  // pinMode(31, INPUT_PULLUP);
  // pinMode(32, INPUT_PULLUP);
  // pinMode(33, INPUT_PULLUP);
  // pinMode(34, INPUT_PULLUP);
  // pinMode(35, INPUT_PULLUP);
  // pinMode(36, INPUT_PULLUP);
  // pinMode(37, INPUT_PULLUP);
  // pinMode(38, INPUT_PULLUP);
  // pinMode(39, INPUT_PULLUP);
  // pinMode(40, INPUT_PULLUP);
  // pinMode(41, INPUT_PULLUP);

  init();

  __libc_init_array();

  initVariant();

  delay(1);
  //SUPC->BOD33.reg |= SUPC_BOD33_ENABLE; //custom attempting to reduce power
#if defined(USBCON) && !defined(USB_DISABLED)
  USBDevice.init();
  USBDevice.attach();
#endif
  #if (SAMR34)
  //Init Osiclator and Rf switch
  pinMode(RFM_TCX_ON, OUTPUT);
  pinMode(RFM_RFSW_ON, OUTPUT);
  //Enable Oscilator and Rf switch
  digitalWrite(RFM_TCX_ON, HIGH);
  digitalWrite(RFM_RFSW_ON, HIGH);
  delay(1);
  #endif


  setup();

  for (;;)
  {

      loop();
      if (serialEventRun) serialEventRun();
  }

  return 0;
}
