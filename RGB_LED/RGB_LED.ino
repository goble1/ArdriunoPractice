int bluePin = 8;
int greenPin = 9;
int redPin = 10;
String myColor;
void setup() {
  Serial.begin(9600);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(redPin,OUTPUT);
}

void loop() {
 //setLED(true,true,true); // white
 setLED(255,200,0);
 


 

}

void setLED(bool rp,bool gp,bool bp) {
 if( bp ) digitalWrite(bluePin,HIGH);
 else digitalWrite(bluePin,LOW);
 if(gp) digitalWrite(greenPin,HIGH);
 else digitalWrite(greenPin,LOW);
 if (rp) digitalWrite(redPin,HIGH);
 else digitalWrite(redPin,LOW);
}

void setLED(int rp,int gp,int bp) {
 analogWrite(bluePin,bp);
 analogWrite(greenPin,gp);
 analogWrite(redPin,rp);
}
