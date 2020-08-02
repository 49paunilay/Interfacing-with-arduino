#include <EEPROM.h>
int value;
int address=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  String str="";
  str=Serial.readString();
  if(str.startsWith("read"))
  {
    address=str.substring(str.indexOf(' ')+1).toInt();
    Serial.print("Address : ");
    Serial.println(address);
    Serial.println(EEPROM.read(address));
  }
  else if(str.startsWith("write"))
  {
    address=str.substring(6,7).toInt();
    value=str.substring(8,str.length()).toInt();
    Serial.print("ADDRESS :");
    Serial.println(address);
    Serial.print("Data->");
    Serial.println(value);
    EEPROM.write(address,value);
  }

}
