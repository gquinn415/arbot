// UpperArm Out
// Elbow Down
// Wrist Sweep 2X Slow
// Shoulder Sweep 3X Slow
// Wrist Sweep 3X Fast
// Elbow Up
// UpperArm In

#include <Servo.h>

Servo Shoulder;  // create servo object to control a servo
Servo UpperArm;
Servo Elbow;
Servo Wrist;
// twelve servo objects can be created on most boards

int posShoulder = 90;    // variable to store the servo position
int posUpperArm = 100;
int posElbow = 0;
int posWrist = 30;

void setup() {
  Shoulder.attach(6);  // attaches the servo on pin 9 to the servo object
  UpperArm.attach(7);
  Elbow.attach(8);
  Wrist.attach(9);
}

void loop() {
Wrist.write(30); 
delay(65000);
// UPPER ARM TURN OUT
  for (posUpperArm = 91; posUpperArm < 180; posUpperArm += 1) { 
    UpperArm.write(posUpperArm);  // tell servo to go to position in variable 'pos'
    delay(25);  // waits 15 ms for the servo to reach the position
  }
// ELBOW DOWN
  for (posElbow = 60; posElbow > 0; posElbow -= 1) { // Elbow move down
    Elbow.write(posElbow);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
// WRIST SWEEP 4X SLOW
  // Wrist Full Sweep 1X Slow
    for (posWrist = 30; posWrist < 90; posWrist += 1) { // Wrist sweep forward slow
      Wrist.write(posWrist);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 15 ms for the servo to reach the position
    }
    for (posWrist = 90; posWrist > 30; posWrist -= 1) { // Wrist sweep backward slow
      Wrist.write(posWrist);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 15 ms for the servo to reach the position
    }
  // Wrist Full Sweep 1X Slow
    for (posWrist = 30; posWrist < 90; posWrist += 1) { // Wrist sweep forward slow
      Wrist.write(posWrist);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 15 ms for the servo to reach the position
    }
    for (posWrist = 90; posWrist > 30; posWrist -= 1) { // Wrist sweep backward slow
      Wrist.write(posWrist);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 15 ms for the servo to reach the position
    }
  // Wrist Full Sweep 1X Slow
    for (posWrist = 30; posWrist < 90; posWrist += 1) { // Wrist sweep forward slow
      Wrist.write(posWrist);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 15 ms for the servo to reach the position
    }
    for (posWrist = 90; posWrist > 30; posWrist -= 1) { // Wrist sweep backward slow
      Wrist.write(posWrist);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 15 ms for the servo to reach the position
    }
  // Wrist Full Sweep 1X Slow
    for (posWrist = 30; posWrist < 90; posWrist += 1) { // Wrist sweep forward slow
      Wrist.write(posWrist);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 15 ms for the servo to reach the position
    }
    for (posWrist = 90; posWrist > 30; posWrist -= 1) { // Wrist sweep backward slow
      Wrist.write(posWrist);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 15 ms for the servo to reach the position
    }
// SHOULDER SWEEP 4X SLOW
  // Shoulder Start Center to Back
    for (posShoulder = 90; posShoulder > 0; posShoulder -= 1) { // Shoulder move from center back
      Shoulder.write(posShoulder);              // tell servo to go to position in variable 'pos'
      delay(5);                       // waits 15 ms for the servo to reach the position
    }
  // Shoulder Full Sweep 1X
    for (posShoulder = 0; posShoulder < 180; posShoulder += 1) { // Shoulder move all the way forward
      Shoulder.write(posShoulder);              // tell servo to go to position in variable 'pos'
      delay(5);                       // waits 15 ms for the servo to reach the position
    }
    for (posShoulder = 180; posShoulder > 0; posShoulder -= 1) { // Shoulder move all the way back
      Shoulder.write(posShoulder);              // tell servo to go to position in variable 'pos'
      delay(5);                       // waits 15 ms for the servo to reach the position
    }
  // Shoulder Full Sweep 1X
    for (posShoulder = 0; posShoulder < 180; posShoulder += 1) { // Shoulder move all the way forward
      Shoulder.write(posShoulder);              // tell servo to go to position in variable 'pos'
      delay(5);                       // waits 15 ms for the servo to reach the position
    }
    for (posShoulder = 180; posShoulder > 0; posShoulder -= 1) { // Shoulder move all the way back
      Shoulder.write(posShoulder);              // tell servo to go to position in variable 'pos'
      delay(5);                       // waits 15 ms for the servo to reach the position
    }
  // Shoulder Full Sweep 1X
    for (posShoulder = 0; posShoulder < 180; posShoulder += 1) { // Shoulder move all the way forward
      Shoulder.write(posShoulder);              // tell servo to go to position in variable 'pos'
      delay(5);                       // waits 15 ms for the servo to reach the position
    }
    for (posShoulder = 180; posShoulder > 0; posShoulder -= 1) { // Shoulder move all the way back
      Shoulder.write(posShoulder);              // tell servo to go to position in variable 'pos'
      delay(5);                       // waits 15 ms for the servo to reach the position
    }
  // Shoulder Stop Back - Center
    for (posShoulder = 0; posShoulder < 90; posShoulder += 1) { // Shoulder move forward to center
      Shoulder.write(posShoulder);              // tell servo to go to position in variable 'pos'
      delay(5);                       // waits 15 ms for the servo to reach the position
    }
// WRIST SWEEP 4X FAST
  // Wrist Full Sweep 1X Slow
    for (posWrist = 30; posWrist < 90; posWrist += 1) { // Wrist sweep forward slow
      Wrist.write(posWrist);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 15 ms for the servo to reach the position
    }
    for (posWrist = 90; posWrist > 30; posWrist -= 1) { // Wrist sweep backward slow
      Wrist.write(posWrist);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 15 ms for the servo to reach the position
    }
  // Wrist Full Sweep 1X Slow
    for (posWrist = 30; posWrist < 90; posWrist += 1) { // Wrist sweep forward slow
      Wrist.write(posWrist);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 15 ms for the servo to reach the position
    }
    for (posWrist = 90; posWrist > 30; posWrist -= 1) { // Wrist sweep backward slow
      Wrist.write(posWrist);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 15 ms for the servo to reach the position
    }
  // Wrist Full Sweep 1X Slow
    for (posWrist = 30; posWrist < 90; posWrist += 1) { // Wrist sweep forward slow
      Wrist.write(posWrist);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 15 ms for the servo to reach the position
    }
    for (posWrist = 90; posWrist > 30; posWrist -= 1) { // Wrist sweep backward slow
      Wrist.write(posWrist);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 15 ms for the servo to reach the position
    }
// ELBOW UP
  for (posElbow = 0; posElbow < 60; posElbow += 1) { // Elbow move up
    Elbow.write(posElbow);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
// UPPER ARM TURN IN
  for (posUpperArm = 180; posUpperArm > 91; posUpperArm -= 1) { // goes from 180 degrees to 0 degrees
    UpperArm.write(posUpperArm);              // tell servo to go to position in variable 'pos'
    delay(25);                       // waits 15 ms for the servo to reach the position
  }
delay(57000);
}