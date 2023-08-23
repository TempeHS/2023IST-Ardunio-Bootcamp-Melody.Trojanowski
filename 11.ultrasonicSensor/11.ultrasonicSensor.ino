/*
  Author: Melody Trojanowski
  Learning Intention: The students will learn how to wire a four pin ultrasonic sensor and configure it to measure distance using a library.
  Success Criteria:
    1. I can correctly wire a 4 pin ultrasonic sensor
    2. I understand what the trigger and echo pins do
    3. I generally understand what a library is
    4. I can get a distance measurement from a untrasonic sensor
    5. I can apply this knowledge to the Ultrasonic Sensor in the sensor kit

  Student Notes: 

  Documentation: 
    https://www.tutorialspoint.com/arduino/arduino_ultrasonic_sensor.htm <-- Ultrasonic sensor explained
    https://github.com/ErickSimoes/Ultrasonic/tree/master <-- We are using this library

  Schematic:
    https://www.tinkercad.com/things/kngLnqo2HEU?sharecode=OVpOeJsUP3bOHBkzbkWCfGcuSIswqXiISYQiG6UzotA
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/11.ultrasonicSensor/Bootcamp-ultrasonicSensor.png
*/

#include <Servo.h>
#include "Ultrasonic.h"

//create servo object
Servo myServo;

//create us sensor -> attached to pin 2
Ultrasonic myUS(2);
unsigned int distance;

//pin servo is attached to -> 8
unsigned static int myServoPin = 8;

void setup() {
//setup SM
Serial.begin(9600);
Serial.println("Serial Monitor configured to 9600");
Serial.println("...............................");

//config servo to pin
myServo.attach(myServoPin);
myServo.write(0);
delay (250);
}

// The LOOP function runs over and over again forever
void loop() {

distance = myUS.MeasureInCentimeters();
Serial.println(distance);

if (distance < 30) {
myServo.write(0);
} else {
myServo.write(180);
}



//sweep to 180
for (int i = 0; i <= 180; i++) {
myServo.write(i);
delay(50);

}

//sweep to 180
for (int y = 180; y <= 180; y--) {
myServo.write(y);
delay(50);
}
}
