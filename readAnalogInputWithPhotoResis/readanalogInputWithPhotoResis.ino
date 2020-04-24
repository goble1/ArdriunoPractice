int input;
int pin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin,INPUT);

}

void loop() {
  // how the photo resistor works
  // the light generates electric hole pairs which increases the current

  // how the circut works
  // as the lights go off the the resis go high the current goes 
  // lower and the voltage drops the number getting read will go down
    input = analogRead(pin);
    Serial.println(input);
    delay(500);
}
