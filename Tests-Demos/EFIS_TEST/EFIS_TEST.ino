/**
Kav Simulations EFIS LCD Example Code
Written by: James Kavanagh
This example code will demonstrate the EFIS working on a simple loop.
It is designed to test the device, and show you how to set up and use it.
**/

// Include the required libraries
#include "KAV_A3XX_EFIS_LCD.h"

// Declare the pins for the EFIS
#define EFIS_CS   8
#define EFIS_CLK  9
#define EFIS_DATA 10

// Create the EFIS object
KAV_A3XX_EFIS_LCD efis(EFIS_CS, EFIS_CLK, EFIS_DATA);

void setup() {
  // Setup the device
  efis.attach(EFIS_CS, EFIS_CLK, EFIS_DATA);
}

void loop() {
  // Demo State 1
  efis.showQFEValue(8888);
  delay(500);
  efis.showQNHValue(8888);
  delay(500);
  
  // Demo State 2
  efis.showQNHValue(1016);
  delay(1000); // Wait a bit...

  // Demo State 3
  efis.showQFEValue(3001);
  delay(1000);

  // Demo State 4
  efis.showStd(1);
  delay(1000);

  // Clear
  efis.clearLCD();
  delay(10); // Wait a bit...
}