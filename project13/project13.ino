// multiplying a number by 2

int number;

void setup()
{
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  number = 0; //zero the incoming number ready for a new read
  Serial.flush(); // clear any "junk" out of the serial bufer before waiting
  while (Serial.available() == 0)
  {
    //do nothing until something enters the serial buffer
  }
  while (Serial.available() > 0)
  {
    number = Serial.read() - '0';
    //read the number in the serial buffer,
    //remove the ASCII text offest for zero: '0'
  }
  // show me the number!
  Serial.print("You entered: ");
  Serial.println(number);
  Serial.print(number);
  Serial.print(" multiplied by two is ");
  number = number * 2;
  Serial.println(number);
}
