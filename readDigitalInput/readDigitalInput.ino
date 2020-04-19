int input;
String msg = "please input a number";
int pin = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() == 0){}
  input=Serial.parseInt();
  while(input > 0){
    Serial.println(input);
    input = input-1;
    digitalWrite(pin,HIGH);
    delay(500);
    digitalWrite(pin,LOW);
    delay(500);
  }
}
