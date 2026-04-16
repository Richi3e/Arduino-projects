//Displaying the temperature in the serial Monitor

float celsius = 0;
float fahrenheit = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // to use serial monitor, we sue this to activate it
}



void findTemps()
{
  float voltage = 0;
  float sensor = 0;
  // read the temp sensor and convert the result to degrees C & F
  sensor = analogRead(0);
  voltage = (sensor*5000) / 1024;// convert raw sensosr to millivolts
  voltage = voltage - 500; // remove the voltage offest
  celsius = voltage / 10;
  fahrenheit = (1.8 * celsius) + 32; // convert celsius to fahrenhet
}

void displayTemps()
{
  Serial.print("Temperature is");
  Serial.print(celsius, 2);
  Serial.print("deg. C / ");
  Serial.print(fahrenheit, 2);
  Serial.println("def. F");// next reading starts on a new line
}

void loop() {
  // put your main code here, to run repeatedly:
  findTemps();
  displayTemps();
  delay(1000);
}
