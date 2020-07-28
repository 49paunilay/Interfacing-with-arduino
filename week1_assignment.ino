int state=0;
int state1=0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
}

void loop()
{
  state=digitalRead(2);
  state1=digitalRead(3);
  if(state==1 || state1==1)
  {
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
  delay(100);
}
