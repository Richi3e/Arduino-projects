// Demonstrating a Digital Input 
#define LED 3
#define BUTTON 7

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT); // Output for the LED
  pinMode(BUTTON, INPUT); //input for the button
}

void loop() {
  // put your main code here, to run repeatedly:
  if ( digitalRead(BUTTON) == HIGH)
  {
    digitalWrite(LED, HIGH);// turn on the led
  }
  else
  {
    digitalWrite(LED, LOW);// turn off the led
  }
}
