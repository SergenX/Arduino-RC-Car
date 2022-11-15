void motoronarka(int ileri,int geri,int ortakstop){
  if(ileri == 1 && geri == 0 && ortakstop == 0){
    pwmcont = 0xFF;
    pwmcont1 = 0;
    }
  if(ileri == 0 && geri == 1 && ortakstop == 0){
    pwmcont = 0;
    pwmcont1 = 0xFF;
    }
  if(ortakstop == 1){
    pwmcont = 0xFF;
    pwmcont1 = 0xFF;
    }
  analogWrite(motorA1,pwmcont); analogWrite(motorA2,pwmcont1);
        analogWrite(motorB1,pwmcont);      analogWrite(motorB2,pwmcont1);
  }

void motorsagsol(int sag , int sol){
  if(sag == 1 && sol == 0){
    pwmcont = 255;
    pwmcont1 = 0;
    }
  if(sag == 0 && sol == 1){
    pwmcont = 0;
    pwmcont1 = 255;
    }
     analogWrite(motorA1,pwmcont); analogWrite(motorA2,pwmcont1);
        analogWrite(motorB1,pwmcont1);      analogWrite(motorB2,pwmcont);
  }
