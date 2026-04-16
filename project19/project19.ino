
#define DATA 6  // connect to pin 14
#define LATCH 8 // connect to pin 12
#define CLOCK 10 // connect to pin 11

// Set up the array with the segments for 0 to 9, A to F (from table)
int digits[] = {252, 96, 218, 242, 102, 182, 190, 224, 254, 246, 238, 62, 156, 122, 158, 142};

void setup() {
  pinMode(LATCH, OUTPUT);
  pinMode(CLOCK, OUTPUT);
  pinMode(DATA, OUTPUT);
}

void displayDigit(int value) {
  digitalWrite(LATCH, LOW);
  shiftOut(DATA, CLOCK, MSBFIRST, digits[value]);
  shiftOut(DATA, CLOCK, MSBFIRST, digits[value]);
  digitalWrite(LATCH, HIGH);
}

void loop() {
  int i;
  for (i = 0; i < 16; i++) {
    displayDigit(i);
    delay(250);
  }
}
