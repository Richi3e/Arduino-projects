// protoshield test

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == HIGH)
  {
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
  }
  if (digitalRead(3) == HIGH)
  {
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
}
