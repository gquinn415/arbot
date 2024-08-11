#include "AccelStepper.h" 

// AccelStepper Setup
AccelStepper stepperX(1, 9, 8); // 1 = Driver interface, Mega Pin 9 connected to STEP pin, Mega Pin 8 connected to DIR pin

// Define the Pins used
#define home_switch 2 // Pin 9 connected to limit switch

// Stepper Travel Variables
long initial_homing=1;  // Used to home stepper at startup, 1 goes clockwise
long secondary_homing=7601; // Used to home stepper each loop

void setup() {
  Serial.begin(9600); // Start the Serial monitor with speed of 9600 Bauds
  pinMode(home_switch, INPUT_PULLUP);
  delay(5); // Wait for driver wake up

  // Set Max Speed and Acceleration of each stepper at startup for homing
  stepperX.setMaxSpeed(200.0);  // Set Max Speed of Stepper (Slower to get better accuracy)
  stepperX.setAcceleration(200.0);  // Set Acceleration of Stepper

  // Start homing procedure of stepper motor at startup
  Serial.print("Stepper is Homing . . . . . . . . . . . ");
  Serial.println("");

  while (digitalRead(home_switch)) {  // Make the Stepper move CW until the switch is activated   
    stepperX.moveTo(initial_homing);  // Set the position to move to
    initial_homing++; // Increase by 1 for next move if needed
    stepperX.run(); // Start moving the stepper
    delay(5);
  }

  stepperX.setCurrentPosition(0); // Set the current position as zero for now
  stepperX.setMaxSpeed(200.0);  // Set Max Speed of Stepper (Slower to get better accuracy)
  stepperX.setAcceleration(200.0);  // Set Acceleration of Stepper
  initial_homing=-1;  // Go CCW

  while (!digitalRead(home_switch)) { // Make the stepper move CCW until the switch is deactivated
    stepperX.moveTo(initial_homing);  
    stepperX.run();
    initial_homing--;
    delay(5);
  }

  stepperX.setCurrentPosition(7600);  // 7600 is the furthest left end of the rail
  Serial.println("Homing Completed");
  Serial.println("");
  stepperX.setMaxSpeed(200.0);  // Set max speed of stepper (faster for regular movements)
  stepperX.setAcceleration(200.0);  // Set acceleration of atepper
}

void loop() {
// Stepper moves down rail and back
  Serial.print("Moving stepper to position: 1");
  Serial.println("");
    stepperX.runToNewPosition(1); // Set new position
    delay(4000);
  Serial.print("Moving stepper to position: 2 ");
  Serial.println("");
    stepperX.runToNewPosition(2500);  // Set new position
    delay(30000);
  Serial.print("Moving stepper to position: 3 ");
  Serial.println("");
    stepperX.runToNewPosition(7000);  // Set new position
    delay(30000);

// Secondary Homing for new loop
  Serial.print("Stepper is Homing . . . . . . . . . . . ");

  while (digitalRead(home_switch)) {  // Make the stepper move CW until the switch is activated   
    stepperX.moveTo(secondary_homing);  // Set the position to move to
    secondary_homing++; // Increase by 1 for next move if needed
    stepperX.run(); // Start moving the stepper
    delay(5);
  }

  stepperX.setCurrentPosition(0); // Set the current position as zero for now
  stepperX.setMaxSpeed(200.0);  // Set max speed of stepper (slower to get better accuracy)
  stepperX.setAcceleration(200.0);  // Set acceleration of stepper
  secondary_homing=-1;  // Go CCW

  while (!digitalRead(home_switch)) { // Make the stepper move CCW until the switch is deactivated
    stepperX.moveTo(secondary_homing);  
    stepperX.run();
    secondary_homing--;
    delay(5);
  }

  secondary_homing=7601;  // Reset secondary homing
  stepperX.setCurrentPosition(7600);
  Serial.println("Homing Completed");
  Serial.println("");
  stepperX.setMaxSpeed(200.0);  // Set Max Speed of Stepper (Faster for regular movements)
  stepperX.setAcceleration(200.0);  // Set Acceleration of Stepper
}
