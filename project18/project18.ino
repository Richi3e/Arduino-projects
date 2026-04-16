#define DATA 6  // connect to pin 14
#define LATCH 8 // conect to pin 12
#define CLOCK 10 //connect to pin 11


// set up the array with the segments for 0 to 9, A to F (from table)
int digits[] = {252, 96, 218, 242, 102, 182, 190, 224, 254, 246, 238, 62, 156, 
122, 158, 142};
void setup() {
  // put your setup code here, to run once:
  pinMode(LATCH, OUTPUT);
  pinMode(CLOCK, OUTPUT);
  pinMode(DATA, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for ( i = 0; i < 16; i++)
  {
    digitalWrite(LATCH, LOW);
    shiftOut(DATA, CLOCK, LSBFIRST, digits[i]);
    digitalWrite(LATCH, HIGH);
    delay(250);
  }
  for ( i = 0; i < 16; i++)
  {
    digitalWrite(LATCH, LOW); //latch pin is used to load the data into the 7-segment display's shift register, which is necessary for displaying the data correctly.
    shiftOut(DATA, CLOCK, LSBFIRST, digits[i]+1); //+1 is to turn on the DP bit
    digitalWrite(LATCH, HIGH);
    delay(250);
  }
}
