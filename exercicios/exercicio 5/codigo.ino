const int botao1=2;
const int led =5;

int var1;

void setup()
{
  pinMode(botao1, INPUT);
  pinMode(led, OUTPUT);
  //Serial.begin(9600);
}

void loop()
{
  var1 = digitalRead(botao1);
  
  if(var1){
  digitalWrite(led,LOW);
  }else{
  digitalWrite(led,HIGH);
}

  delay(10);
}
