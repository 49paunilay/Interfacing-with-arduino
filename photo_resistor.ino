int bright=0;
int time=0;
void setup(){
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  bright=analogRead(A0);
  Serial.println(bright);
  light(bright);
}
void light(int b){
  digitalWrite(8,HIGH);
  delay(b);
  digitalWrite(8,LOW);
  delay(b);
}
  
  
  
