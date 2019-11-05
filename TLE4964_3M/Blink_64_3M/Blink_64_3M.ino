
int state=LOW;
  
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(14,OUTPUT);
pinMode(9,INPUT);
Serial.println("Start");
digitalWrite(14,HIGH);
delay(1000);
digitalWrite(14,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:


state=digitalRead(9);
Serial.println(state); 
Serial.println(digitalRead(9));
digitalWrite(14,state);
delay(100);
}
