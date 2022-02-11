  const 1nt botao1 = 2;
  const 1nt botao2 = 3;


  int var1;
  int var2;


   void setup()
   {
      pinMode(botao1, INPUT);
      pinMode(botao2, INPUT);
      //Serial.begin(9600);
   }

   void loop()
   {
     var1 = digitalRead(botao1);
     var2 = digitalRead(botao2);
    
     If(var1){
       digitalWrite(led,HIGH);
     }
     If(var2){
       digitalWrite(led,LOW);
     }
   }
     
