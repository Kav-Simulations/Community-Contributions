/**
Kav Simulations Battery Voltage LCD Example Code
Written by: James Kavanagh
This example code will demonstrate the Battery Voltage LCD working on a simple loop.
It is designed to test the device, and show you how to set up and use it.
**/

// Include the required libraries
#include "KAV_A3XX_BATTERY_LCD.h"

// Declare the pins for the LCD
#define BATTERY_CS 8
#define BATTERY_CLK 9
#define BATTERY_DATA 10

// Create the Battery object
KAV_A3XX_BATTERY_LCD battery(BATTERY_CS, BATTERY_CLK, BATTERY_DATA);

void setup()
{
  // Setup the device
  battery.attach(BATTERY_CS, BATTERY_CLK, BATTERY_DATA);
}

void loop()
{
  // Demo State 1
  battery.showBattValueInt(888);
  delay(1000);

  // Demo State 2
  for (int i = 21; i >= 0; i--)
  {
    if (i < 10) {battery.showBattValueInt(270 + i);}
    delay(150);
  }

  // Demo State 3
  for (int i = 0; i < 21; i++)
  {
    if (i < 10) {battery.showBattValueInt(270 + i);}
    delay(150);
  }

  // Clear
  battery.clearLCD();
  delay(10); // Wait a bit...
}
