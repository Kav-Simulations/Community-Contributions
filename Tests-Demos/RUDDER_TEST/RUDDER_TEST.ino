/**
Kav Simulations Rudder LCD Example Code
Written by: James Kavanagh
This example code will demonstrate the Rudder LCD working on a simple loop.
It is designed to test the device, and show you how to set up and use it.
**/

// Include the required libraries
#include "KAV_A3XX_RUDDER_LCD.h"

// Declare the pins for the Rudder
#define RUDDER_CS 8
#define RUDDER_CLK 9
#define RUDDER_DATA 10

// Create the FCU and EFIS objects
KAV_A3XX_RUDDER_LCD rudder(RUDDER_CS, RUDDER_CLK, RUDDER_DATA);

void setup()
{
  // Setup the device
  rudder.attach(RUDDER_CS, RUDDER_CLK, RUDDER_DATA);
}

void loop()
{
  // Demo State 1
  rudder.setValueInt(888);
  delay(1000);

  //
  for (int i = 0; i < 21; i++)
  {
    rudder.showLeftValueInt(i);
    delay(100);
  }
  
  // Demo State 2
  for (int i = 21; i >= 0; i--)
  {
    rudder.showLeftValueInt(i);
    delay(100);
  }
  
  // Demo State 3
  for (int i = 0; i < 21; i++)
  {
    rudder.showRightValueInt(i);
    delay(100);
  }
  
  // Demo State 4
  for (int i = 21; i >= 0; i--)
  {
    rudder.showRightValueInt(i);
    delay(100);
  }
  
  // Clear
  rudder.clearLCD();
  delay(10); // Wait a bit...
}
