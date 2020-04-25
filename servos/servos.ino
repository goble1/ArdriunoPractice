#include <Servo.h>
int pin = A0;
int pos;
Servo servo; //object 

void setup() {
  // put your setup code here, to run once:
  // red goes to power
  // brown ground
  // orange control
  Serial.begin(9600);
  servo.attach(pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("What angle to move servo");
  while( Serial.available() < 1){} // using == 0 is fragile 
  pos=Serial.parseInt();
  Serial.parseInt();//parseInt() also has another 0 for a return line so need to call it again to clear the buffer
  Serial.println(pos);
  servo.write(pos);

}
