/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservo.write(90);              // tell servo to go to position in variable 'pos'
    delay(3000);
    myservo.write(177);              // tell servo to go to position in variable 'pos'
    delay(6000);
    myservo.write(10); 
    delay(3000);
    
    // waits 15ms for the servo to reach the position
  
}

