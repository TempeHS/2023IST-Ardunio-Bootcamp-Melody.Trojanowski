/*
  Author: 
  Learning Intention: The students will learn what 'pulse width modulation' is and how to use it to write analogue data on a digital PIN.
  Success Criteria:
    1. I understand what pulse width modulation is
    2. I can identify the PWM PINS on the Arduino Uno
    3. I can wire an RGB LED for PWM control in TINKERCAD
    5. I can write PWM data to multiple pins and manually change the colour of the LED

  Student Notes: 

  Documentation: 
    https://www.w3schools.com/colors/colors_rgb.aspt
  Schematic:
    https://www.tinkercad.com/things/drNDsMxGMIY?sharecode=D6x4_xTTRl_zGs7B-XGqfbQhG_xgjj3TVS_c-GNTK-c
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/06.pulseWidthModulation/Bootcamp-PWMOutput.png
*/

static unsigned int lightSensor = A0;
static unsigned int myLED = 5;

void setup() {
//configure serial monitor
Serial.begin(9600);
//debug serial monitor
Serial.println("Serial Monitor configured to 9600");
Serial.println("...............................");
pinMode(myLED, OUTPUT);
}

void loop() {
//read serial data from light sensor
int val = analogRead(lightSensor);
//write serial data from light sensor
Serial.print("Light Sensor:");
Serial.println(val);
//write serial data to myLED
int LEDbright = 255;
analogWrite(myLED, LEDbright);
}