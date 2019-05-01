#include <LiquidCrystal.h>
#include<Wire.h>
#define RS 2
#define E 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7
int A;
int lastA=0;
int h=0;
int p=0;
int i=0;
float v=0;
LiquidCrystal lcd(RS,E,D4,D5,D6,D7);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Fan speed:");
A=0;
h=0;
 lcd.setCursor(0,1);
 lcd.print("Voltage:");
}

void loop() {
 
  // put your main code here, to run repeatedly:
  A=digitalRead(9);
  if (A!=lastA){
    if(A=HIGH){
      if (h<4){
       h++;
      delay(1000);
      lcd.setCursor(12,0);
      lcd.print(h);  
      }
      else{
        h=0;
        delay(1000);
      lcd.setCursor(12,0);
      lcd.print(h);  
      }
      if(h==1){
        i=h-1;
        p=127.5+42.5*i;
        analogWrite(10,p);
        v=9.00*(p/255.00);
        lcd.setCursor(0,1);
         lcd.print("Voltage:");
        lcd.setCursor(8,1);
        lcd.print(v); 
           lcd.setCursor(12,1);
           lcd.print("(V)"); 
      }
      else if (h==2){
        
        i=h-1;
        p=127.5+42.5*i;
          analogWrite(10,p);
          v=9.00*(p/255.00);
          lcd.setCursor(0,1);
          lcd.print("Voltage:");
          lcd.setCursor(8,1);
          lcd.print(v); 
             lcd.setCursor(12,1);
           lcd.print("(V)"); 
      }
      else if (h==3){
        i=h-1;
        p=127.5+42.5*i;
          analogWrite(10,p);
           v=9.00*(p/255.00);
          lcd.setCursor(0,1);
            lcd.print("Voltage:");
           lcd.setCursor(8,1);
            lcd.print(v); 
               lcd.setCursor(12,1);
           lcd.print("(V)"); 
      }
      else if (h==4){
           i=h-1;
           p=127.5+42.5*i;
          analogWrite(10,p);
          v=9.00*(p/255.00);
           lcd.setCursor(0,1);
           lcd.print("Voltage:");
            lcd.setCursor(8,1);
            lcd.print(v); 
               lcd.setCursor(12,1);
           lcd.print("(V)"); 
      }
      else if (h==0){
          analogWrite(10,0);
           v=0;
          lcd.setCursor(0,1);
          lcd.print("Voltage:");
          lcd.setCursor(8,1);
           lcd.print(v);
           lcd.setCursor(12,1);
           lcd.print("(V)"); 
      }
      } 
      
      
    }

}
