// Demonstrating PWM
int d = 5;
void setup() {
  // put your setup code here, to run once:
 pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // the led is to turn on increasing the brightness fully, then reverse until till its dark
 for ( int a = 0; a < 256; a++)
 {
   analogWrite(4, a); // 4 - digital pin
   delay(d);
 }

 for(int a = 255; a >= 0 ; a--)
 {
   analogWrite(4, a);
   delay(d);
 }
 delay(200);
}
