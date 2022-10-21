
#include <Wire.h>    
int i, data=0, t;
int sec, sec10=0, minute=0, min10=0, hour=0, hour10=0;
void setup(void){
  Wire.begin();           
  Serial.begin(9600); 
/*
Wire.beginTransmission(B1101000);
Wire.send(0x00);
Wire.send(0x00);//sec
Wire.send(0x24);//min
Wire.send(B01101001);//HOUR
Wire.endTransmission();
*/
}
void loop(){
  //delay(1000);
  Wire.beginTransmission(B1101000);
  Wire.send(0x00);   
  Wire.endTransmission();
  //delay(1);
  Wire.requestFrom(B1101000,3);
  sec = Wire.receive();
  minute = Wire.receive();
  hour = Wire.receive();
  sec10 = sec >> 4;
  for (i=0; i<4; i++)
  bitClear(sec, i+4);
  min10 = minute >> 4;
  for (i=0; i<4; i++)
  bitClear(minute, i+4);
  bitClear(hour, 5);
  bitClear(hour, 6);
  hour10 = hour >> 4;
  bitClear(hour, 4);
  
  
  
  
  
  
  Serial.print(sec10, DEC);
  Serial.print(sec, DEC);
  Serial.print(min10, DEC);
  Serial.print(minute, DEC);
  Serial.print(hour10, DEC);
  Serial.println(hour, DEC);
  Write(hour10, hour, min10, minute, sec10, sec);
}










void Write(int h10, int h, int m10,int m, int s10, int s){
  if(h10==1){
   pinMode(4, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   digitalWrite(2, LOW);
   digitalWrite(3, HIGH);
  reset();
  }
  if(h==1){
   pinMode(3, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(4, OUTPUT);
   digitalWrite(2, LOW);
   digitalWrite(4, HIGH);
  reset(); 
  }
  if(h==2){
   pinMode(3, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(4, OUTPUT);
   digitalWrite(2, HIGH);
   digitalWrite(4, LOW);
 reset();  
  }
  if(h==3){
   pinMode(3, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(4, OUTPUT);
   digitalWrite(2, HIGH);
   digitalWrite(4, LOW);
reset();
   pinMode(3, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(4, OUTPUT);
   digitalWrite(2, LOW);
   digitalWrite(4, HIGH);
 reset();    
  }  
  if(h==4){
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(2, LOW);
   digitalWrite(5, HIGH);
reset();
  }
  if(h==5){
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(2, LOW);
   digitalWrite(5, HIGH);
reset();
   pinMode(3, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(4, OUTPUT);
   digitalWrite(2, LOW);
   digitalWrite(4, HIGH);
reset();
  }
  if(h==6){
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(2, LOW);
   digitalWrite(5, HIGH);
reset();
   pinMode(3, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(4, OUTPUT);
   digitalWrite(2, HIGH);
   digitalWrite(4, LOW);
reset();
  }
  if(h==7){
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(2, LOW);
   digitalWrite(5, HIGH);
reset();
   pinMode(3, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(4, OUTPUT);
   digitalWrite(2, HIGH);
   digitalWrite(4, LOW);
reset();
   pinMode(3, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(4, OUTPUT);
   digitalWrite(2, LOW);
   digitalWrite(4, HIGH);
reset();  
  }
if(h==8){
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(2, HIGH);
   digitalWrite(5, LOW);
  reset(); 
  }
if(h==9){
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(2, HIGH);
   digitalWrite(5, LOW);
  reset(); 
   pinMode(3, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(2, OUTPUT);
   pinMode(4, OUTPUT);
   digitalWrite(2, LOW);
   digitalWrite(4, HIGH);
  reset();
}
if(m10==1){
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, INPUT);
   pinMode(2, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(2, LOW);
   digitalWrite(6, HIGH);
  reset(); 
  }
if(m10==2){
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, INPUT);
   pinMode(2, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(2, HIGH);
   digitalWrite(6, LOW);
  reset(); 
  }
if(m10==3){
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, INPUT);
   pinMode(2, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(2, HIGH);
   digitalWrite(6, LOW);
  reset(); 
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, INPUT);
   pinMode(2, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(2, LOW);
   digitalWrite(6, HIGH);
  reset();
  }
if(m10==4){
   pinMode(2, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   digitalWrite(4, HIGH);
   digitalWrite(3, LOW);
  reset(); 
  }
if(m10==5){
   pinMode(2, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   digitalWrite(4, HIGH);
   digitalWrite(3, LOW);
  reset();
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, INPUT);
   pinMode(2, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(2, LOW);
   digitalWrite(6, HIGH);
  reset();  
  }
if(m==1){
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(6, INPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
  reset(); 
  }
if(m==2){
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(6, INPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(5, HIGH);
   digitalWrite(4, LOW);
  reset(); 
  }
if(m==3){
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(6, INPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(5, HIGH);
   digitalWrite(4, LOW);
  reset(); 
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(6, INPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
  reset(); 
  }
if(m==4){
   pinMode(2, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
  reset(); 
  }
if(m==5){
   pinMode(2, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
  reset();
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(6, INPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
  reset(); 
  }
if(m==6){
   pinMode(2, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
  reset();
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(6, INPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(5, HIGH);
   digitalWrite(4, LOW);
  reset(); 
  }
if(m==7){
   pinMode(2, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
  reset();
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(6, INPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(5, HIGH);
   digitalWrite(4, LOW);
  reset();
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(6, INPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
  reset(); 
  }
if(m==8){
   pinMode(2, INPUT);
   pinMode(4, INPUT);
   pinMode(6, INPUT);
   pinMode(3, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(5, HIGH);
   digitalWrite(3, LOW);
  reset(); 
  }
if(m==9){
   pinMode(2, INPUT);
   pinMode(4, INPUT);
   pinMode(6, INPUT);
   pinMode(3, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(5, HIGH);
   digitalWrite(3, LOW);
  reset(); 
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(6, INPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
  reset(); 
  }
if(s10==1){
   pinMode(2, INPUT);
   pinMode(4, INPUT);
   pinMode(6, INPUT);
   pinMode(3, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(3, HIGH);
   digitalWrite(5, LOW);
  reset(); 
  }
if(s10==2){
   pinMode(2, INPUT);
   pinMode(4, INPUT);
   pinMode(5, INPUT);
   pinMode(3, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(6, HIGH);
   digitalWrite(3, LOW);
  reset(); 
  }
if(s10==3){
   pinMode(2, INPUT);
   pinMode(4, INPUT);
   pinMode(5, INPUT);
   pinMode(3, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(6, HIGH);
   digitalWrite(3, LOW);
  reset();
   pinMode(2, INPUT);
   pinMode(4, INPUT);
   pinMode(6, INPUT);
   pinMode(3, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(3, HIGH);
   digitalWrite(5, LOW);
  reset();  
  }
if(s10==4){
   pinMode(2, INPUT);
   pinMode(4, INPUT);
   pinMode(5, INPUT);
   pinMode(3, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(3, HIGH);
   digitalWrite(6, LOW);
  reset(); 
  }  
if(s10==5){
   pinMode(2, INPUT);
   pinMode(4, INPUT);
   pinMode(5, INPUT);
   pinMode(3, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(3, HIGH);
   digitalWrite(6, LOW);
  reset();
   pinMode(2, INPUT);
   pinMode(4, INPUT);
   pinMode(6, INPUT);
   pinMode(3, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(3, HIGH);
   digitalWrite(5, LOW);
  reset();
  }   
if(s==1){
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(5, HIGH);
   digitalWrite(6, LOW);
  reset(); 
  }  
if(s==2){
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(6, HIGH);
   digitalWrite(5, LOW);
  reset(); 
  }
if(s==3){
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(6, HIGH);
   digitalWrite(5, LOW);
  reset();
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(5, HIGH);
   digitalWrite(6, LOW);
  reset(); 
  }
if(s==4){
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(5, INPUT);
   pinMode(4, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(4, HIGH);
   digitalWrite(6, LOW);
  reset(); 
  }
if(s==5){
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(5, INPUT);
   pinMode(4, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(4, HIGH);
   digitalWrite(6, LOW);
  reset();
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(5, HIGH);
   digitalWrite(6, LOW);
  reset(); 
  }
if(s==6){
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(5, INPUT);
   pinMode(4, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(4, HIGH);
   digitalWrite(6, LOW);
  reset();
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(6, HIGH);
   digitalWrite(5, LOW);
  reset(); 
  }
if(s==7){
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(5, INPUT);
   pinMode(4, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(4, HIGH);
   digitalWrite(6, LOW);
  reset();
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(6, HIGH);
   digitalWrite(5, LOW);
  reset();
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(5, HIGH);
   digitalWrite(6, LOW);
  reset(); 
  }
if(s==8){
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(5, INPUT);
   pinMode(4, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(6, HIGH);
   digitalWrite(4, LOW);
  reset(); 
  }
if(s==9){
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(5, INPUT);
   pinMode(4, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(6, HIGH);
   digitalWrite(4, LOW);
  reset();
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   digitalWrite(5, HIGH);
   digitalWrite(6, LOW);
  reset(); 
  }
 
}//wirite









void reset(){
  delayMicroseconds(2000);
   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW); 
   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);

}//reset



