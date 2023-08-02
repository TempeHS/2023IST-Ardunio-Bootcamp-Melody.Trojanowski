/*
  Author: 
  Learning Intention: The students will learn about configuring PINs and how to write binary data to a specific PIN.
  Success Criteria:
    1. I understand how to configure a PIN for outputting data
    2. I know how to write binary data to a specific PIN
    3. I can change the value in the delay method to change time
    4. I understand that LOW = false = 0 = <1.5 volts (or Off) and that HIGH = true = 1 = >3 volts (or On)
    5. I can create and correctly wire a LED in TINKERCAD and prototype my code
    6. I understand that a resistor is needed to reduce the voltage for the LED
    7. I understand what 'static' means before the int declaration
    8. I can organise output data so it correctly plots on the serial monitor
    9. I can apply this knowledge to the LED & Buzzer in the sensor kit

  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/
    https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/
    https://docs.arduino.cc/software/ide-v2/tutorials/ide-v2-serial-plotter
  Schematic:
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/03.digitalWrite/LED_Schedmatic.png

*/

static unsigned int myLED = 4;
static unsigned int myBuzzer = 3;
bool LEDStatus = false;

void setup() {
Serial.begin(9600);
Serial.println("Serial Monitor configured to 9600");
Serial.println("...............................");
pinMode(myLED, OUTPUT); 
pinMode(myBuzzer, OUTPUT); 
}

void loop() {
digitalWrite(myLED, HIGH);
tone(myBuzzer, 128);
delay (500);
digitalWrite(myLED, LOW);
noTone(myBuzzer);
delay (5000);
}