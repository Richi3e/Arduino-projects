unsigned long starting, finished, elapsed;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  starting = micros();
  digitalWrite(3, HIGH);
  finished = micros();
  elapsed = finished - starting;
  Serial.print("LOW to HIGH: ");
  Serial.print(elapsed);
  Serial.println("microseconds");
  delay(1000);

  starting = micros();
  digitalWrite(3, LOW);
  finished = micros();
  elapsed = finished - starting;
  Serial.print("HIGH to LOW: ");
  Serial.print(elapsed);
  Serial.println(" microseconds");
  delay(1000);
}
