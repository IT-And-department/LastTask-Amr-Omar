int sw1 = 5;
int sw2 = 6;
int led = 13;
void setup() {
pinMode(sw1,INPUT);
pinMode(sw2,INPUT);
pinMode(led,OUTPUT);
}

void loop() {
  if (digitalRead(sw1)==0)
  digitalWrite(led,HIGH);
   if (digitalRead(sw2)==0)
  digitalWrite(led,LOW); 
}
