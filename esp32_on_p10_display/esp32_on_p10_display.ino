#include <DMD32.h>
#include <SPI.h>

#define ROWS 1
#define COLS 1
/*#define MAX_DEVICES */

DMD dmd(ROWS, COLS);

void setup() {
/*  dmd.setBrightness(100);*/
  dmd.begin();
}

void loop() {
  dmd.selectFont(SystemFont5x7);
  dmd.clearScreen(true);
  dmd.drawString(0, 0, "Welcome to Embedded Systems Lab");
  delay(1000);
}
