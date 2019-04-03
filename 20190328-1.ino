int index=0;
int A;
int B;
int lastB=0;
int lastA=0;
const int buzz=11;
void setup() {
  // put your setup code here, to run once:
  for(int i=2;i<9;i++){
    pinMode(i,OUTPUT);
  }
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(buzz,OUTPUT);
  for(int i=0;i<7;i++){
      digitalWrite(i,0); 
      }
   Serial.begin(9600);
  index=0;
  A=0;
  B=0;
}

void loop() {
  // put your main code here, to run repeatedly:
  A=digitalRead(9);
  if (A != lastA){
  if(A==HIGH){
    index=index+1;
    Serial.print(index);
    if (index==1){
      for(int i=2;i<9;i++){
      digitalWrite(i,0); 
      }
      digitalWrite(4,1);
      digitalWrite(5,1);
    }
    else if (index==2){
       for(int i=2;i<9;i++){
      digitalWrite(i,0); 
      }
      digitalWrite(7,1);
      digitalWrite(2,1);
      digitalWrite(3,1);
      digitalWrite(5,1);
      digitalWrite(6,1);
    }
    else if (index==3){
        for(int i=2;i<9;i++){
      digitalWrite(i,0); 
      }
      digitalWrite(7,1);
      digitalWrite(4,1);
      digitalWrite(3,1);
      digitalWrite(5,1);
      digitalWrite(6,1);
    }
     else if (index==4){
         for(int i=2;i<9;i++){
      digitalWrite(i,0); 
      }
      digitalWrite(7,1);
      digitalWrite(8,1);
      digitalWrite(4,1);
      digitalWrite(5,1);
     }
      else if (index== 5){
         for(int i=2;i<9;i++){
      digitalWrite(i,0); 
      }
      digitalWrite(7,1);
      digitalWrite(8,1);
      digitalWrite(3,1);
      digitalWrite(4,1);
      digitalWrite(6,1);
      }
      else if (index==6){
         for(int i=2;i<9;i++){
      digitalWrite(i,0); 
      }
      digitalWrite(7,1);
      digitalWrite(8,1);
      digitalWrite(2,1);
      digitalWrite(3,1);
      digitalWrite(4,1);
      digitalWrite(6,1);
      }
      else if (index==7){
         for(int i=2;i<9;i++){
      digitalWrite(i,0); 
      }
      digitalWrite(8,1);
      digitalWrite(4,1);
      digitalWrite(5,1);
      digitalWrite(6,1);
      }
      else if (index==8){
         for(int i=2;i<9;i++){
      digitalWrite(i,1); 
      }
      }
      else if (index==9){
         for(int i=2;i<9;i++){
      digitalWrite(i,1); 
      }
      digitalWrite(2,0);
      }
    else {
      for (int i=2;i<9;i++){
        digitalWrite(i,0);
      }
   
     }
  }
    if (index>=10){
  index=0;
   }
  }
  B=digitalRead(10);
  if (B!= lastB){
    if (B==HIGH){
       for(index;index>-1;index--){
      
        if (index==1){
      for(int i=2;i<9;i++){
      digitalWrite(i,0); 
      }
      digitalWrite(4,1);
      digitalWrite(5,1);  
      tone(buzz,1000); 
        delay(50);
        noTone(buzz);
        delay(950);
        tone(buzz,1000);
    }
    else if (index==2){
       for(int i=2;i<9;i++){
      digitalWrite(i,0); 
      }
      digitalWrite(7,1);
      digitalWrite(2,1);
      digitalWrite(3,1);
      digitalWrite(5,1);
      digitalWrite(6,1);
      tone(buzz,1000); 
        delay(50);
        noTone(buzz);
        delay(950);
        tone(buzz,1000);
    }
    else if (index==3){
        for(int i=2;i<9;i++){
      digitalWrite(i,0); 
      }
      digitalWrite(7,1);
      digitalWrite(4,1);
      digitalWrite(3,1);
      digitalWrite(5,1);
      digitalWrite(6,1);
      tone(buzz,1000); 
        delay(50);
        noTone(buzz);
        delay(950);
        tone(buzz,1000);
    }
     else if (index==4){
         for(int i=2;i<9;i++){
      digitalWrite(i,0); 
      }
      digitalWrite(7,1);
      digitalWrite(8,1);
      digitalWrite(4,1);
      digitalWrite(5,1);
      tone(buzz,1000); 
        delay(50);
        noTone(buzz);
        delay(950);
        tone(buzz,1000);
     }
      else if (index== 5){
         for(int i=2;i<9;i++){
      digitalWrite(i,0); 
      }
      digitalWrite(7,1);
      digitalWrite(8,1);
      digitalWrite(3,1);
      digitalWrite(4,1);
      digitalWrite(6,1);
      tone(buzz,1000); 
        delay(50);
        noTone(buzz);
        delay(950);
        tone(buzz,1000);
      }
      else if (index==6){
         for(int i=2;i<9;i++){
      digitalWrite(i,0); 
      }
      digitalWrite(7,1);
      digitalWrite(8,1);
      digitalWrite(2,1);
      digitalWrite(3,1);
      digitalWrite(4,1);
      digitalWrite(6,1);
      tone(buzz,1000); 
        delay(50);
        noTone(buzz);
        delay(950);
        tone(buzz,1000);
      }
      else if (index==7){
         for(int i=2;i<9;i++){
      digitalWrite(i,0); 
      }
      digitalWrite(8,1);
      digitalWrite(4,1);
      digitalWrite(5,1);
      digitalWrite(6,1);
      tone(buzz,1000); 
        delay(50);
        noTone(buzz);
        delay(950);
        tone(buzz,1000);
      }
      else if (index==8){
         for(int i=2;i<9;i++){
      digitalWrite(i,1); 
      }
      tone(buzz,1000); 
        delay(50);
        noTone(buzz);
        delay(950);
        tone(buzz,1000);
      }
      else if (index==9){
         for(int i=2;i<9;i++){
      digitalWrite(i,1); 
      }
      digitalWrite(2,0);
      tone(buzz,1000); 
        delay(50);
        noTone(buzz);
        delay(950);
        tone(buzz,1000);
      }
    else {
      for (int i=2;i<9;i++){
        digitalWrite(i,0);
      }
      tone(buzz,500); 
        delay(50);
        noTone(buzz);
        delay(50);
        tone(buzz,500);
        delay(50);
        noTone(buzz);
        delay(50);
        tone(buzz,500);
        delay(50);
        noTone(buzz);
     }
     delay(1000);
       }
       if (index<0){
        index=0;
       }
    }
  }
  lastA=A;
  lastB=B;
  noTone(buzz);
  
}

