int PinButton1 = 2;
int PinLed = 10;
int val = 0;

void setup() {
  // put your setup code here, to run once:
 pinMode(PinButton1, INPUT);
 pinMode(PinLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(PinButton1);
  if (val == HIGH)
  {
    digitalWrite(PinLed, HIGH);
  }
  else
  {
    digitalWrite(PinLed, LOW);
  }
}
