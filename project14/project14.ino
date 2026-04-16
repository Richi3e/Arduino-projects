// using long variables

long number = 0;
long a = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  number = 0; // zero the incoming number ready for a new read
  Serial.flush(); //clear any "junk" out of the serial buffer before waiting
  while (Serial.available() == 0)
  {
    
  }
  while(Serial.available() > 0)
  {
    number = number * 10;
    // read the next number in the buffer and subtract the character 0 from it to convert it to the actual integer number
    a = Serial.read() - '0';
    // add this value a into accumulating number
    number= number + a;
    //allow a short delay for more serial data to come into serial.available
    delay(5);
  }
  Serial.print("You entered: ");
  Serial.println(number);
  Serial.print(number);
  Serial.print(" multiplied by two is ");
  number = number * 2;
  Serial.println(number);
}