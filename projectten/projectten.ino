// creating a function to set the number of bk=links
#define LED 13

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}


void blinkLED(int cycles, int del)
{
  for( int z = 0 ; z < cycles ; z++)
  {
    digitalWrite(LED, HIGH);
    delay(del);
    digitalWrite(LED, LOW);
    delay(del);
  }
}

// creating a function to return value
float convertTemp(float celsius)
{
  float fahrenheit = 0;
  fahrenheit = ( 1.8 * celsius) + 32;
  return fahrenheit;
}

void loop() {
  // put your main code here, to run repeatedly:
  blinkLED(12, 100);
  delay(1000);
}
