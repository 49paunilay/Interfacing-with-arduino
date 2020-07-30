int bright=0;
int fadeamt=5;
void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  analogWrite(9,bright);
  bright=bright+fadeamt;
  if(bright<0 || bright>255){
    fadeamt=-fadeamt;
  }
  delay(100); // Wait for 100 millisecond(s)
}
