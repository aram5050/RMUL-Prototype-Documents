


/* this program is meant to instruct how to control a BLDC with a potentiometer, we will try autonomous controls after this*/


# include <Servo.h>

Servo ESC1; 
Servo ESC2;
Servo ESC3; 
Servo servo1; 
Servo servo2; 
int potValue ; 
void setup() {
    ESC1.attach(9,1000,2000); /* attaches to pin 9 and sets min and max PWM signal duration respectively */ 
    ESC2.attach(11,1000,2000);
    ESC3.attach(6,1000,2000);
    servo1.attach(3);
    servo2.attach(5); 
    
}

void loop() {
  potValue =  analogRead(A0);
  potValue = map(potValue,0,1023,0,180);
  ESC1.write(potValue);
  ESC2.write(potValue);
  ESC3.write(potValue);
  servo1.write(potValue);
  servo2.write(potValue);
  

}
