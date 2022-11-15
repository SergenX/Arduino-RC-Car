// motor degisken PWM CONTROL (pwmcont)//
int pwmcont ;
int pwmcont1 ;
//***********Motor Pinleri*******************//
const int motorA1 = 0xC; //IN1 SOLON 
const int motorA2 = 0xD; //IN2 SOLARKA
const int motorB1 = 0xB;  //IN3 SAGON
const int motorB2 = 0xA;  //IN4 SAGARKA
//*************Setup************************// 
char gelenkomut;
void setup() {
pinMode(motorA1,OUTPUT); //sol 255 öne gider
pinMode(motorA2,OUTPUT); // 255 arkaya gider
pinMode(motorB1,OUTPUT); //255 sağ öne gider
pinMode(motorB2,OUTPUT); //255 arkaya gider
Serial.begin(9600);
}
//************************************************************//
void loop() {
        if(Serial.available()) {
   gelenkomut = Serial.read();
  switch(gelenkomut) {
  case 'F':
  motoronarka(1,0,0);
  break;
 
  case 'B':
   motoronarka(0,1,0);
  break;
 
  case 'R':
   motorsagsol(1,0);  
  break;
  case 'L':
   motorsagsol(0,1);  
  break;
 
  case 'S':
    motoronarka(0,0,1);
  break;
}
  }
}
//Batem Tübitak Projesi 2022-2023