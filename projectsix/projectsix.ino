// creating  cell battery tester
#define newLED 2 
#define okLED 4
#define oldLED 6

int analogValue = 0;
float voltage = 0;
int ledDelay = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(newLED, OUTPUT);
  pinMode(okLED, OUTPUT);
  pinMode(oldLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogValue = analogRead(0);
  voltage = 0.0048*analogValue;
  if( voltage >= 1.6)
  {
    digitalWrite(okLED, HIGH);
    delay(ledDelay);
    digitalWrite(okLED, LOW);
  }
  else if(voltage < 1.6 && voltage > 1.4)
  {
    digitalWrite(okLED, HIGH);
    delay(ledDelay);
    digitalWrite(okLED, LOW);
  }
  else if ( voltage <= 1.4)
  {
    digitalWrite(oldLED, HIGH);
    delay(ledDelay);
    digitalWrite(oldLED, LOW);
  }
}
