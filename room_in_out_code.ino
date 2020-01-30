void setup() {
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  
}

void loop() {
  int c=0;
  int d7 = digitalRead(7);
  int d8 = digitalRead(8);
  if(d7==LOW){
    delay(100);
    if(d8==LOW){
      ++c;
      if(c<6){
      analogWrite(9,51*c);
    }
   }
  }
if(d8==LOW){
    delay(100);
    if(d7==LOW){
      --c;
      if(c>-1){
      analogWrite(9,51*c);
    }
   }
  }


}
