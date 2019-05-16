#include <LiquidCrystal.h>
const int interval=150;
const byte mario_pin=11;

LiquidCrystal lcd(2,3,4,5,6,7);
int f=20;
int s;
byte coin1[8]={
  B00000,
  B00000,
  B00000,
  B00111,
  B01000,
  B10001,
  B10010,
  B10010,
};
byte coin2[8]={
  B00000,
  B00000,
  B00000,
  B11100,
  B00010,
  B10001,
  B01001,
  B01001,
  
};
byte coin3[8]={
  B10010,
  B10010,
  B10001,
  B10000,
  B01000,
  B00111,
  B00000,
  B00000,
};
byte coin4[8]={
  B01001,
  B01001,
  B10001,
  B00001,
  B00010,
  B11100,
  B00000,
  B00000,
};
byte box1[8]={
  B00000,
  B00000,
  B00000,
  B11111,
  B10000,
  B10011,
  B10100,
  B10000,
};
byte box2[8]={
  B00000,
  B00000,
  B00000,
  B11111,
  B00001,
  B11001,
  B00101,
  B01000,
};
byte box3[8]={
  B10000,
  B10000,
  B10000,
  B10000,
  B11111,
  B00000,
  B00000,
  B00000,
};
byte box4[8]={
  B10001,
  B10001,
  B00001,
  B10001,
  B11111,
  B00000,
  B00000,
  B00000,
};
byte mario1[8] = {
B00000,
B00000,
B00000,
B00000,
B00001,
B00001,
B00001,
B00000,

};
byte mario2[8] = {
B00001,
B00001,
B00001,
B00001,
B00000,
B00000,
B00000,
B00000
};
byte mario3[8] = {
B00000,
B11111,
B11111,
B11111,
B11111,
B11111,
B11111,
B11111,

};
byte mario4[8] = {
B11111,
B11111,
B11111,
B11111,
B11111,
B11111,
B11111,
B11110
};

byte mario5[8] = {
B00000,
B00000,
B11100,
B00000,
B11000,
B11100,
B11000,
B11000,

};

byte mario6[8] = {
B00000,
B10000,
B10000,
B10000,
B00000,
B00000,
B1000,
B00000
};

byte mario7[8] = {
B00000,
B00000,
B00000,
B00000,
B00000,
B00000,
B00000,
B00000,
};

byte mario8[8] = {
B00111,
B00111,
B00111,
B00000,
B00001,
B00011,
B00011,
B00001
};

byte mario9[8] = {
B00000,
B01111,
B11111,
B11111,
B11111,
B11111,
B11111,
B01111,

};

byte mario10[8] = {
B11111,
B11111,
B11111,
B11111,
B11111,
B11001,
B00000,
B10000
};
byte mario11[8] = {
B00000,
B00000,
B11100,
B10000,
B11100,
B11110,
B11100,
B11000,

};

byte mario12[8] = {
B11111,
B11111,
B10110,
B11110,
B11110,
B11110,
B00000,
B00000,
};

byte mario13[8] = {
B00000,
B00000,
B00000,
B00000,
B00000,
B00000,
B00000,
B00000,

};


byte mario14[8] = {
B00000,
B00000,
B00000,
B00000,
B00011,
B00011,
B00111,
B00000
};


byte mario15[8] = {
B00000,
B00000,
B00111,
B01111,
B01111,
B11111,
B11111,
B11111,

};

byte mario16[8] = {
B01111,
B11111,
B11111,
B11111,
B11111,
B11111,
B00111,
B00111
};

byte mario17[8] = {
B00000,
B00000,
B10000,
B11110,
B11000,
B11110,
B11111,
B11110,

};

byte mario18[8] = {
B11100,
B11110,
B11100,
B11000,
B11000,
B10000,
B00000,
B10000,
};

byte mario19[8] = {
B00000,
B00011,
B00111,
B00111,
B01111,
B01111,
B01111,
B00011,

};


byte mario20[8] = {
B01111,
B01111,
B01111,
B01111,
B00111,
B00011,
B00011,
B00011
};

byte mario21[8] = {
B00000,
B11000,
B11111,
B11100,
B11111,
B11111,
B11111,
B11110,
};

byte mario22[8] = {
B11100,
B11110,
B11110,
B11110,
B11100,
B11100,
B11110,
B10000
};


byte mario23[8] = {
B00000,
B00001,
B00011,
B00011,
B00111,
B00111,
B00111,
B00001,
};

byte mario24[8] = {
B11111,
B11111,
B11011,
B00111,
B01111,
B11111,
B11100,
B01110,
};

byte mario25[8] = {
B00000,
B11100,
B11111,
B11110,
B11111,
B11111,
B11111,
B11111,
};

byte mario26[8] = {
B11111,
B11111,
B11110,
B11111,
B11111,
B01111,
B00000,
B00000,
};



byte mario27[8] = {
B00000,
B00000,
B10000,
B00000,
B00000,
B10000,
B00000,
B00000,
};


byte mario28[8] = {
B11000,
B11000,
B10000,
B10000,
B10000,
B10000,
B00000,
B00000,
};


byte mario29[8] = {
B00000,
B00000,
B00000,
B00001,
B00001,
B00011,
B00011,
B00011,
};

byte mario30[8] = {
B00001,
B00011,
B00111,
B01111,
B01111,
B11111,
B11000,
B00000,
};



byte mario31[8] = {
B00000,
B00000,
B11110,
B11111,
B11111,
B11111,
B11111,
B11111,
};

byte mario32[8] = {
B11111,
B11111,
B11111,
B11111,
B11111,
B11110,
B11100,
B11110,
};

byte mario33[8] = {
B00000,
B00000,
B00000,
B10000,
B00000,
B10000,
B11000,
B10000,
};


byte mario34[8] = {
B00000,
B10000,
B00000,
B00000,
B00000,
B00000,
B00000,
B00000,
};
byte empty[8]={
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};
void setup() {
  // put your setup code here, to run once:
  s=1000/f;
  pinMode(11,OUTPUT);
  pinMode(9,INPUT);
lcd.begin(16,2);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("8-BIT");
lcd.setCursor(0,1);
lcd.print("MARIO");
lcd.createChar(1,coin1);
     lcd.setCursor(5,0);
     lcd.print(char(1));
     lcd.createChar(2,coin2);
     lcd.setCursor(6,0);
     lcd.print(char(2));
     lcd.createChar(3,coin3);
     lcd.setCursor(5,1);
     lcd.print(char(3));
     lcd.createChar(4,coin4);
     lcd.setCursor(6,1);
     lcd.print(char(4));
     lcd.createChar(5,box1);
     lcd.setCursor(7,0);
     lcd.print(char(5));
     lcd.createChar(6,box2);
     lcd.setCursor(8,0);
     lcd.print(char(6));
     lcd.createChar(7,box3);
     lcd.setCursor(7,1);
     lcd.print(char(7));
     lcd.createChar(8,box4);
     lcd.setCursor(8,1);
     lcd.print(char(8));
     lcd.setCursor(9,0);
     lcd.print(char(1));
     lcd.setCursor(10,0);
     lcd.print(char(2));
     lcd.setCursor(9,1);
     lcd.print(char(3));
     lcd.setCursor(10,1);
     lcd.print(char(4));
     lcd.setCursor(11,0);
     lcd.print(char(1));
     lcd.setCursor(12,0);
     lcd.print(char(2));
     lcd.setCursor(11,1);
     lcd.print(char(3));
     lcd.setCursor(12,1);
     lcd.print(char(4));
     lcd.setCursor(13,0);
     lcd.print(char(5));
     lcd.setCursor(14,0);
     lcd.print(char(6));
     lcd.setCursor(13,1);
     lcd.print(char(7));
     lcd.setCursor(14,1);
     lcd.print(char(8));
}

void loop() {
  // put your main code here, to run repeatedly:
   tone(mario_pin,659,interval);
   delay(interval);
   tone(mario_pin,659,interval);
   delay(interval*3);
   tone(mario_pin,659,interval);
   delay(interval*3);
   tone(mario_pin,523,interval);
   delay(interval);
   tone(mario_pin,659,interval);
   delay(interval*3);
   tone(mario_pin,784,interval);
   delay(interval*5);
   tone(mario_pin,392,interval);
   delay(interval*5);
   tone(mario_pin,523,interval);
   delay(interval*3);
   tone(mario_pin,392,interval);
   delay(interval*3);
   tone(mario_pin,330,interval);
   delay(interval*3);
   tone(mario_pin,440,interval);
   delay(interval*2);
   tone(mario_pin,494,interval);
   delay(interval*2.7);
   tone(mario_pin,494,interval);
   delay(interval*1);
   tone(mario_pin,440,interval);
   delay(interval*3);
   tone(mario_pin,392,interval);
   delay(interval*1.2);
   tone(mario_pin,659,interval);
   delay(interval*1.2);
   tone(mario_pin,784,interval);
   delay(interval*1.2);
   tone(mario_pin,880,interval);
   delay(interval*2.2);
   tone(mario_pin,698,interval);
   delay(interval*1.2);
   tone(mario_pin,784,interval);
   delay(interval*3);
   tone(mario_pin,659,interval);
   delay(interval*3);
   tone(mario_pin,523,interval);
   delay(interval*1);
   tone(mario_pin,587,interval);
   delay(interval*1);
   tone(mario_pin,494,interval);
   delay(interval*3);
   tone(mario_pin,523,interval);
   delay(interval*2.5);
   tone(mario_pin,392,interval);
   delay(interval*2.5);
   tone(mario_pin,330,interval);
   delay(interval*2.5);
   tone(mario_pin,440,interval);
   delay(interval*3);
   tone(mario_pin,494,interval);
   delay(interval*3);
   tone(mario_pin,494,interval);
   delay(interval);
   tone(mario_pin,440,interval);
   delay(interval*3);
   tone(mario_pin,392,interval);
   delay(interval*1.2);
   tone(mario_pin,659,interval);
   delay(interval*1.2);
   tone(mario_pin,784,interval);
   delay(interval*1.2);
   tone(mario_pin,880,interval);
   delay(interval*2.2);
   tone(mario_pin,698,interval);
   delay(interval*1.2);
   tone(mario_pin,784,interval);
   delay(interval*3);
   tone(mario_pin,659,interval);
   delay(interval*3);
   tone(mario_pin,523,interval);
   delay(interval*1);
   tone(mario_pin,587,interval);
   delay(interval*1);
   tone(mario_pin,494,interval);
   delay(interval*3);
   tone(mario_pin,784,interval);
   delay(interval*2);
   tone(mario_pin,698,interval);
   delay(interval*2);
   tone(mario_pin,698,interval);
   delay(interval*1);
   tone(mario_pin,659,interval);
   delay(interval*2);
   tone(mario_pin,659,interval);
   delay(interval*3);
   tone(mario_pin,392,interval);
   delay(interval*1);
   tone(mario_pin,440,interval);
   delay(interval*1);
   tone(mario_pin,523,interval);
   delay(interval*2);
   tone(mario_pin,440,interval);
   delay(interval*1);
   tone(mario_pin,523,interval);
   delay(interval*1);
   tone(mario_pin,587,interval);
   delay(interval*2);
   tone(mario_pin,784,interval);
   delay(interval*1);
   tone(mario_pin,698,interval);
   delay(interval*2);
   tone(mario_pin,698,interval);
   delay(interval*1);
   tone(mario_pin,659,interval);
   delay(interval*2);
   tone(mario_pin,659,interval);
   delay(interval*4);
   tone(mario_pin,1046,interval);
   delay(interval*1);
   tone(mario_pin,1046,interval);
   delay(interval*2);
   tone(mario_pin,1046,interval);
   delay(interval*4);
   tone(mario_pin,784,interval);
   delay(interval*1);
   tone(mario_pin,698,interval);
   delay(interval*2);
   tone(mario_pin,698,interval);
   delay(interval*1);
   tone(mario_pin,659,interval);
   delay(interval*2);
   tone(mario_pin,659,interval);
   delay(interval*4);
   tone(mario_pin,415,interval);
   delay(interval*1);
   tone(mario_pin,440,interval);
   delay(interval*1);
   tone(mario_pin,523,interval);
   delay(interval*2);
   tone(mario_pin,440,interval);
   delay(interval*1);
   tone(mario_pin,523,interval);
   delay(interval*1);
   tone(mario_pin,587,interval);
   delay(interval*2.5);
   tone(mario_pin,642,interval);
   delay(interval*2);
   tone(mario_pin,587,interval);
   delay(interval*2);
   tone(mario_pin,523,interval);
   delay(interval*4);
   delay(1000);
   lcd.clear();
 
   for (int k=0; k<16 ; k++){
    int a=k+1;
    int b=k+2;
    int c=k+3;
    int d=k+4;
    lcd.createChar(1,mario1);
    lcd.createChar(2,mario2);
    lcd.createChar(3,mario3);
    lcd.createChar(4,mario4);
    lcd.createChar(5,mario5);
    lcd.createChar(6,mario6);
    lcd.createChar(7,empty);
    lcd.setCursor(k,0);
    lcd.print(char(1));
    lcd.setCursor(k,1);
    lcd.print(char(2));
    lcd.setCursor(a,0);
    lcd.print(char(3));
    lcd.setCursor(a,1);
    lcd.print(char(4));
    lcd.setCursor(b,0);
    lcd.print(char(5));
    lcd.setCursor(b,1);
    lcd.print(char(6));
    delay(s);
    lcd.createChar(1,mario7);
    lcd.createChar(2,mario8);
    lcd.createChar(3,mario9);
    lcd.createChar(4,mario10);
    lcd.createChar(5,mario11);
    lcd.createChar(6,mario12);
    lcd.setCursor(k,0);
    lcd.print(char(1));
    lcd.setCursor(k,1);
    lcd.print(char(2));
    lcd.setCursor(a,0);
    lcd.print(char(3));
    lcd.setCursor(a,1);
    lcd.print(char(4));
    lcd.setCursor(b,0);
    lcd.print(char(5));
    lcd.setCursor(b,1);
    lcd.print(char(6));
    delay(s);
    lcd.createChar(1,mario13);
    lcd.createChar(2,mario14);
    lcd.createChar(3,mario15);
    lcd.createChar(4,mario16);
    lcd.createChar(5,mario17);
    lcd.createChar(6,mario18);
    lcd.setCursor(k,0);
    lcd.print(char(1));
    lcd.setCursor(k,1);
    lcd.print(char(2));
    lcd.setCursor(a,0);
    lcd.print(char(3));
    lcd.setCursor(a,1);
    lcd.print(char(4));
    lcd.setCursor(b,0);
    lcd.print(char(5));
    lcd.setCursor(b,1);
    lcd.print(char(6));
    delay(s);
    lcd.createChar(1,mario19);
    lcd.createChar(2,mario20);
    lcd.createChar(3,mario21);
    lcd.createChar(4,mario22);
    lcd.createChar(7,empty);
    lcd.setCursor(k,0);
    lcd.print(char(7));
    lcd.setCursor(k,1);
    lcd.print(char(7));
    lcd.setCursor(a,0);
    lcd.print(char(1));
    lcd.setCursor(a,1);
    lcd.print(char(2));
    lcd.setCursor(b,0);
    lcd.print(char(3));
    lcd.setCursor(b,1);
    lcd.print(char(4));
    delay(s);
    lcd.createChar(1,mario23);
    lcd.createChar(2,mario24);
    lcd.createChar(3,mario25);
    lcd.createChar(4,mario26);
    lcd.createChar(5,mario27);
    lcd.createChar(6,mario28);
    lcd.createChar(7,empty);
    lcd.setCursor(k,0);
    lcd.print(char(7));
    lcd.setCursor(k,1);
    lcd.print(char(7));
    lcd.setCursor(a,0);
    lcd.print(char(1));
    lcd.setCursor(a,1);
    lcd.print(char(2));
    lcd.setCursor(b,0);
    lcd.print(char(3));
    lcd.setCursor(b,1);
    lcd.print(char(4));
    lcd.setCursor(c,0);
    lcd.print(char(5));
    lcd.setCursor(c,1);
    lcd.print(char(6));
    delay(s);
    lcd.createChar(1,mario29);
    lcd.createChar(2,mario30);
    lcd.createChar(3,mario31);
    lcd.createChar(4,mario32);
    lcd.createChar(5,mario33);
    lcd.createChar(6,mario34);
    lcd.setCursor(a,0);
    lcd.print(char(1));
    lcd.setCursor(a,1);
    lcd.print(char(2));
    lcd.setCursor(b,0);
    lcd.print(char(3));
    lcd.setCursor(b,1);
    lcd.print(char(4));
    lcd.setCursor(c,0);
    lcd.print(char(5));
    lcd.setCursor(c,1);
    lcd.print(char(6));
    delay(s);
   }

   }
