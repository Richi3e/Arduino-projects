#define DATA 6 //connect to pin 14
#define LATCH 8 // connect to pin 12
#define CLOCK 10 //connect to pin 11 

int number = 0;
int answer = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LATCH, OUTPUT); // set up the pins
  pinMode(CLOCK, OUTPUT);
  pinMode(DATA, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0)); // initialize the random number generator
  displayNumber(0); //Clear the LEDs
}

void displayNumber(byte a)
{
  // sends number to br displayed on the LEDs
  digitalWrite(LATCH, LOW);
  shiftOut(DATA, CLOCK, MSBFIRST, a);
  digitalWrite(LATCH, HIGH);
}

void getAnswer()
{
  //receive the answer from the player
  int z = 0;
  Serial.flush();
  while (Serial.available() == 0)
  {
    // do nothing until something comes into the serial buffer
  }
  // one character of serial data is available, begin calculating
  while(Serial.available() > 0)
  {
    // 1 becomes 10 while there is data in the buffer
    answer = answer * 10;
    // read the next number in the buffer and subtract '0' from it
    z = Serial.read() - '0';
    // add this digit into the accumulating value
    answer = answer + z;
    // allow a short delay for any more numbers to come into serial.available
    delay(5);
  }
  Serial.print("You entered: ");
  Serial.println(answer);
}

void checkAnswer()
{
  //check the answer from the player and show the results
  if ( answer == number) // correct
  {
    Serial.print("Correct!");
    Serial.print(answer, BIN);
    Serial.print(" equals ");
    Serial.println(number);
     Serial.println();
  }
  else // incorrect
  {
    Serial.print("Incorrect, ");
    Serial.print(number, BIN);
    Serial.print(" equals ");
    Serial.print(number);
    Serial.println();
  }
  answer = 0;
  delay(10000); // give the player time to review the number
}

void loop() {
  // put your main code here, to run repeatedly:
  number = random(256); // generates a number between 0 and 255
  displayNumber(number);
  Serial.println("What is the binary number in base-10? ");
  getAnswer();
  checkAnswer();
}
