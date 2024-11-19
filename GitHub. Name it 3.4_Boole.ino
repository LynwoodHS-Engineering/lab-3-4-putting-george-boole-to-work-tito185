int LED=9;
 
void setup(){
  pinMode(LED, OUTPUT);



 
  int count = 1;
  int Leds[3] = {3, 5, 6};
  while (count <= 3){
    pinMode(Leds[count], OUTPUT);
    for (int i=0;i<=255;i=i+1){
      digitalWrite(Leds[count], HIGH);
      analogWrite(LED,i);
      delay(5);
    }
   
    for (int i=255;i>=0;i--){
      analogWrite(LED,i);
      delay(5);
    }
    count++;
  }
     
}

void loop(){
 
}
