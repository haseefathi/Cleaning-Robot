#include <Servo.h>
#include "Pump.h"
Servo servo;
int roller=11;
int btByte=0;
int rightmotor1=10;
int rightmotor2=9;
int leftmotor1=6;
int leftmotor2=5;
int _speed=255;
int mop=2;
Pump waterpump(4);
void setup(){
servo.attach(11);
servo.write(0);
pinMode(rightmotor1,OUTPUT);
pinMode(rightmotor2,OUTPUT);
pinMode(leftmotor1,OUTPUT);
pinMode(leftmotor2,OUTPUT);
pinMode(mop,OUTPUT);
pinMode(4,OUTPUT);
digitalWrite(rightmotor1,LOW);
digitalWrite(rightmotor2,LOW);
digitalWrite(leftmotor1,LOW);
digitalWrite(leftmotor2,LOW);
digitalWrite(4,LOW);
digitalWrite(mop,LOW);
Serial.begin(9600);
}
void loop(){
if(Serial.available() > 0){
btByte=Serial.read();
}
switch(btByte){
case '1': //roller up
servo.write(0);
break;
case '0': //roller down
servo.write(135);
break;
case 'f': //FORWARD
analogWrite(rightmotor1, _speed);
digitalWrite(rightmotor2,LOW);
analogWrite(leftmotor1,_speed);
digitalWrite(leftmotor2,LOW);
break;
case 's': //STOP
digitalWrite(rightmotor1,LOW);
digitalWrite(rightmotor2,LOW);
digitalWrite(leftmotor1,LOW);
digitalWrite(leftmotor2,LOW);
break;
case 'b': //BACK
analogWrite(rightmotor2,_speed);
digitalWrite(rightmotor1,LOW);
analogWrite(leftmotor2,_speed);
digitalWrite(leftmotor1,LOW);
break;
case 'r': //RIGHT
analogWrite(rightmotor1,_speed);
digitalWrite(rightmotor2,LOW);
analogWrite(leftmotor2,_speed);
digitalWrite(leftmotor1,LOW);
break;
case 'l': //LEFT
analogWrite(rightmotor2,_speed);
digitalWrite(rightmotor1,LOW);
analogWrite(leftmotor1,_speed);
digitalWrite(leftmotor2,LOW);
break;
case 'W': //SPRAYS WATER FROM PUMP
waterpump.on();
break;
case 'w': //STOPS SPRAYING WATER
waterpump.off();
break;
case 'M': //MOPS TURN ON
digitalWrite(mop,HIGH);
break;
case 'm': //MOPS TURN OFF
digitalWrite(mop,LOW);
break;
delay(5000);
}
}
