// project 25 -using interrupts
/**
* to trigger the interrupts you will have to connect pin 2(micros)
* or pin 3(mills) to a high voltage (5V), so by disconnecting it, it triggers it
*/
#define LED 13
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  attachInterrupt(0, displayMicros, RISING);
  attachInterrupt(1, displayMillis, RISING);
}

void displayMicros()
{
  Serial.write("micros() = ");
  Serial.println(micros());
}

void displayMillis()
{
  Serial.write("millis() = ");
  Serial.println(millis());
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}
