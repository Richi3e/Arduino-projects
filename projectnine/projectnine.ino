// calling function
#define LED 13
#define del 200

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUtPUT);
}

void BlinkLED()
{
  digitalWrite(LED, HIGH);
  delay(del);
  digitalWrite(LED, LOW);
  delay(del);
  digitalWrite(LED, HIGH);
  delay(del);
  digitalWrite(LED, LOW);
  delay(del);
}

void loop() {
  // put your main code here, to run repeatedly:
  blinkLED();
  delay(1000);
}
