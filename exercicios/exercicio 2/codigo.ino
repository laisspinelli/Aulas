// C++ code
//
void setup()
{
  pinMode(3,LOW);
  pinMode(4,HIGH);
  
}

void loop()
{
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  delay(1000);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(1000);  
}
