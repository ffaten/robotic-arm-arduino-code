// C++ code
//
#include <Servo.h>
Servo myServo1 ;
Servo myServo2 ;
Servo myServo3 ;
Servo myServo4 ;
Servo myServo5 ;

int const potPin1 = A0;
int const potPin2 = A1;
int const potPin3 = A2;
int const potPin4 = A3;
int const potPin5 = A4;

int potVal1;
int potVal2;
int potVal3;
int potVal4;
int potVal5;
int angle1;
int angle2;
int angle3;
int angle4;
int angle5;

void setup(){
  myServo1.attach(11);
  myServo2.attach(10);
  myServo3.attach(9);
  myServo4.attach(6);
  myServo5.attach(5);

myServo1.write(90); // initial angle  for servo
myServo2.write(90);
myServo3.write(90); 
myServo4.write(90); 
myServo5.write(90);
  
  Serial.begin(9600);
}
void loop(){
  potVal1 = analogRead(potPin1);
  potVal2 = analogRead(potPin2);
  potVal3 = analogRead(potPin3);
  potVal4 = analogRead(potPin4);
  potVal5 = analogRead(potPin5);
  
  angle1 = map(potVal1, 0, 1023, 0, 179);
  angle2 = map(potVal2, 0, 1023, 0, 179);
  angle3 = map(potVal3, 0, 1023, 0, 179);
  angle4 = map(potVal4, 0, 1023, 0, 179);
  angle5 = map(potVal5, 0, 1023, 0, 179);
  
  myServo1.write(angle1);
  myServo2.write(angle2);
  myServo3.write(angle3);
  myServo4.write(angle4);
  myServo5.write(angle5);
  delay(15);
}
