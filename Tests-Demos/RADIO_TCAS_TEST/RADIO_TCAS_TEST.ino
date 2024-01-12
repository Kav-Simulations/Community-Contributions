/**
Kav Simulations Radio/TCAS LCD Example Code
Written by: James Kavanagh
This example code will demonstrate the Radio/TCAS LCD working on a simple loop.
It is designed to test the device, and show you how to set up and use it.
**/

// Include the required libraries
#include "KAV_A3XX_RAD_TCAS_LCD.h"

// Declare the pins for the LCD
#define RAD_TCAS_CS 8
#define RAD_TCAS_CLK 9
#define RAD_TCAS_DATA 10

// Create the Radio/TCAS object
KAV_A3XX_RAD_TCAS_LCD rad_tcas(RAD_TCAS_CS, RAD_TCAS_CLK, RAD_TCAS_DATA);

void setup()
{
  // Setup the device
  rad_tcas.attach(RAD_TCAS_CS, RAD_TCAS_CLK, RAD_TCAS_DATA);
}

void loop()
{
  // Demo State 1
  rad_tcas.showRadio(888888);
  delay(1000);

  // Demo State 2
  rad_tcas.showRadio(122800);
  delay(1000);

  // Demo State 3
  rad_tcas.showTcas(1234);
  delay(1000);

  // Demo State 4
  for (int i = 21; i >= 0; i--)
  {
    rad_tcas.showRadio(122800 - (i * 100));
    delay(150);
  }
  
  // Clear
  rad_tcas.clearLCD();
  delay(10); // Wait a bit...
}
