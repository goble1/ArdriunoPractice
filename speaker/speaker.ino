int pin = 13;
void setup() {
  pinMode(pin,OUTPUT);
}

void loop() {
 //setLED(true,true,true); // white
// active buzzer will play a sound with just voltage
// playNote(250,1000);
// playNote(200,1000);
// playNote(150,1000);
// playNote(50,1000);
// playNote(0,1000);

//passive buzzer need to play a sound wave
//playNote(200,3);
//playNote(0,3);
}


void playNote(int volts,int dur) {
 analogWrite(pin,volts);
 delay(dur);
 analogWrite(pin,0);
}
