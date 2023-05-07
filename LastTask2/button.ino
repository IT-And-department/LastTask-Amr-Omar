int sw1 = 5;
int led = 13;
boolean state = 0;

void setup() {
pinMode(sw1,INPUT);
pinMode(led,OUTPUT);
}

void loop() {
  if (digitalRead(sw1)==0){
      state = !state;
      digitalWrite(led,state);
      delay(300);
    }
 
}
