// creating an electronic die

void setup() {
  // put your setup code here, to run once:
  randomSeed(analogRead(0)); //seed the random nmber generator
  for( int z =1; z < 7; z++) //LEDs on pins 1-6 are output
  {
    pinMode(z, OUTPUT);
  }
}

void randomLED(int del)
{
  int r;
  r = random(1,7); // get a random number from 1 to 6
  digitalWrite(r, HIGH);
  if (del > 0)
  {
    delay(del);
  }
  else if (del == 0) // if the delay entered was zero, hold the LED on
  {
    do{}
    while(1);
  }
  digitalWrite(r, LOW); //Turn the LED off
}
void loop() {
  // put your main code here, to run repeatedly:
  int a;
  //cycle the LEDs around for effect
  for (a = 0; a < 100; a++)
  {
    randomLED(50);
  }
  for (a = 1; a <= 10; a++)
  {
    randomLED(a * 100);
  }
  // stop at the final random number and LED
  randomLED(0);
}
