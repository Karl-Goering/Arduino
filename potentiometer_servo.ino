/* Now we need to use potentiometer to control the servo.
   When the potentiometer make a round, the servo rotates
   from 0 to 180 degrees.
*/
#include <Servo.h>
Servo myservo; 
int sensor=0; 
int val;
void setup() {
myservo.attach(9); 
}
void loop() {
sensor=analogRead(A0);  
val = map(sensor, 0, 1023, 0, 180);  
myservo.write(val); 
delay(15); 
}
