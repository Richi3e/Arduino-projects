#define DATA 6 // digital 6 to pin 14 on the 74HC595
#define LATCH 8 // digital 8 to pin 12 on the 74HC595
#define CLOCK 10 // digital 10 to pin 11 on the 74HC595

void setup() {
  // put your setup code here, to run once:
  pinMode(LATCH, OUTPUT);
  pinMode(CLOCK, OUTPUT);
  pinMode(DATA, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  byte a =  B11110000;
  for ( i = 0; i < 256; i++)
  {
    digitalWrite(LATCH, LOW);
    shiftOut(DATA, CLOCK, MSBFIRST, a);
    digitalWrite(LATCH, HIGH);
    delay(200);
  }
}
