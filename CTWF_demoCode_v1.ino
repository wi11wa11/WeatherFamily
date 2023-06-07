
//accelStepper library

#include <AccelStepper.h>

// Define steppers and pins (note stepper wire colour order - blue-yellow-pink-orange. This is to get correct in1in2in3in4 pin firing order

AccelStepper stepper1(AccelStepper::FULL4WIRE, 2, 3, 4, 5); //temperature
AccelStepper stepper2(AccelStepper::FULL4WIRE, 8, 9, 10, 11); //rain
AccelStepper stepper3(AccelStepper::FULL4WIRE, 30, 32, 34, 36); //cloudCover
AccelStepper stepper4(AccelStepper::FULL4WIRE, 46, 48, 50, 52); //windDirection
AccelStepper stepper5(AccelStepper::FULL4WIRE, 38, 40, 42, 44); //windSpeed

int led = 22;

void setup() {

  pinMode(led, OUTPUT);

  stepper1.setMaxSpeed(150);
  stepper1.setAcceleration(50);

  stepper2.setMaxSpeed(120);
  stepper2.setAcceleration(50);

  stepper3.setMaxSpeed(150);
  stepper3.setAcceleration(50);

  stepper4.setMaxSpeed(150);
  stepper4.setAcceleration(50);

  stepper5.setMaxSpeed(50);
  stepper5.setAcceleration(50);

}

void loop() {
  digitalWrite(led, HIGH);
  delay(5000);
  digitalWrite(led, LOW);

  //---------------------demo_POSITION_<0>_(startingPosToPos1-------
  //stepper1_TEMP
  stepper1.moveTo(750); //move to ~10 DEGREES !!adjust!!
  stepper1.runToPosition();
  delay(1000);
  stepper1.setCurrentPosition(0);

  //stepper2_RAIN
  stepper2.moveTo(4076); //move two full rotations backwards - forecast: NO CHANCE of rain
  stepper2.runToPosition();
  delay(1000);
  stepper2.setCurrentPosition(0);

  //stepper3_CLOUD
  stepper3.moveTo(1020); //move 1/2 of a turn backwards - forecast: SUNNY
  stepper3.runToPosition();
  delay(1000);
  stepper3.setCurrentPosition(0);

  //stepper4_DIR
  stepper4.moveTo(-510); //move back to N from E - NORTHERLY wind
  stepper4.runToPosition();
  delay(1000);
  stepper4.setCurrentPosition(0);


  //---------------------demo_POSITION_<1>--------------------------
  //stepper1_TEMP
  stepper1.moveTo(-300); //move to ~15 DEGREES !!adjust!!
  stepper1.runToPosition();
  delay(1000);
  stepper1.setCurrentPosition(0);

  //stepper2_RAIN
  stepper2.moveTo(-2038); //move a full roation - forecast: SLIGHT CHANCE of rain
  stepper2.runToPosition();
  delay(1000);
  stepper2.setCurrentPosition(0);

  //stepper3_CLOUD
  stepper3.moveTo(-510); //move 1/4 of a turn - forecast: MOSTLY SUNNY
  stepper3.runToPosition();
  delay(1000);
  stepper3.setCurrentPosition(0);

  //stepper4_DIR
  stepper4.moveTo(255); //move from N to NE - NORTH EASTERLY wind
  stepper4.runToPosition();
  delay(1000);
  stepper4.setCurrentPosition(0);

  //stepper5_SPEED
  stepper5.setCurrentPosition(0);
  stepper5.setMaxSpeed(50);
  stepper5.setAcceleration(50); //move wind speed very slowly - forecast: <10 KNOTS
  stepper5.moveTo(600);
  stepper5.runToPosition();
  delay(1000);
  stepper5.setCurrentPosition(0);

  //---------------------demo_POSITION_<2>--------------------------

  //stepper2_RAIN
  stepper2.moveTo(-2038); //move a full roation - forecast: MEDIUM CHANCE of rain
  stepper2.runToPosition();
  delay(1000);
  stepper2.setCurrentPosition(0);

  //stepper3_CLOUD
  stepper3.moveTo(-510); //move 1/4 of a turn - forecast: PARTLY CLOUDY
  stepper3.runToPosition();
  delay(1000);
  stepper3.setCurrentPosition(0);

  //stepper5_SPEED
  stepper5.setCurrentPosition(0);
  stepper5.setMaxSpeed(150);
  stepper5.setAcceleration(150); //move wind speed slowly - forecast: 11-16 KNOTS
  stepper5.moveTo(1200);
  stepper5.runToPosition();
  delay(1000);
  stepper5.setCurrentPosition(0);

  //---------------------demo_POSITION_<3>--------------------------

  //stepper2_RAIN
  stepper2.moveTo(-2038); //move a full roation - forecast: HIGH CHANCE of rain
  stepper2.runToPosition();
  delay(1000);
  stepper2.setCurrentPosition(0);

  //stepper3_CLOUD
  stepper3.moveTo(-510); //move 1/4 of a turn - forecast: CLOUDY
  stepper3.runToPosition();
  delay(1000);
  stepper3.setCurrentPosition(0);

  //stepper5_SPEED
  stepper5.setCurrentPosition(0);
  stepper5.setMaxSpeed(300);
  stepper5.setAcceleration(150); //move wind speed fast - forecast: 17-21 KNOTS
  stepper5.moveTo(2200);
  stepper5.runToPosition();
  delay(1000);
  stepper5.setCurrentPosition(0);

  //---------------------demo_POSITION_<4>--------------------------

  //stepper2_RAIN
  stepper2.moveTo(-2038); //move a full roation - forecast: VERY HIGH CHANCE of rain
  stepper2.runToPosition();
  delay(1000);
  stepper2.setCurrentPosition(0);

  //stepper3_CLOUD
  stepper3.moveTo(-510); //move 1/4 of a turn - forecast: OVERCAST
  stepper3.runToPosition();
  delay(1000);
  stepper3.setCurrentPosition(0);

  //stepper5_SPEED
  stepper5.setCurrentPosition(0);
  stepper5.setMaxSpeed(500);
  stepper5.setAcceleration(150); //move wind speed very fast - forecast: 22-27 KNOTS
  stepper5.moveTo(4400);
  stepper5.runToPosition();
  delay(1000);
  stepper5.setCurrentPosition(0);

  //---------------------demo_return_to_STARTING POSITION_<5>--------------------------

  //stepper1_TEMP
  stepper1.moveTo(-450); //move to ~24 DEGREES !!adjust!!
  stepper1.runToPosition();
  delay(1000);
  stepper1.setCurrentPosition(0);

  //stepper2_RAIN
  stepper2.moveTo(4076); //move two full rotations backwards - forecast: MEDIUM CHANCE of rain
  stepper2.runToPosition();
  delay(1000);
  stepper2.setCurrentPosition(0);

  //stepper3_CLOUD
  stepper3.moveTo(1020); //move 1/2 of a turn backwards - forecast: PARTLY CLOUDY
  stepper3.runToPosition();
  delay(1000);
  stepper3.setCurrentPosition(0);

  //stepper4_DIR
  stepper4.moveTo(255); //move from NE to E - EASTERLY wind
  stepper4.runToPosition();
  delay(1000);
  stepper4.setCurrentPosition(0);

  //stepper5_SPEED
  stepper5.setCurrentPosition(0);
  stepper5.setMaxSpeed(150);
  stepper5.setAcceleration(150); //move wind speed slowly - forecast: 11-16 KNOTS
  stepper5.moveTo(2038); //one rotation
  stepper5.runToPosition();
  delay(1000);
  stepper5.setCurrentPosition(0);

  digitalWrite(led, HIGH); //turn led on for tomorrows rain forecast

  stepper5.setCurrentPosition(0);
  stepper5.setMaxSpeed(150);
  stepper5.setAcceleration(150); //move wind speed slowly - forecast: 11-16 KNOTS
  stepper5.moveTo(203800); //run wind speed for 100 rotations // SAFE TO UNPLUG POWER
  stepper5.runToPosition();
  delay(1000);
  stepper5.setCurrentPosition(0);

}
