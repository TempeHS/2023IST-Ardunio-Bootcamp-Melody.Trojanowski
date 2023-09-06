//function to update OLED display
void printToOLED(String theMessage, String theMessage2) {
  u8g2.clearBuffer();                   // clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);   // choose a suitable font
  u8g2.setCursor(0,10);                   //set cursor to first...
  u8g2.print("hello earthlings");
  u8g2.setCursor(0,20);    
  u8g2.print("Temperature is:");    
  u8g2.print(theTemp);
  u8g2.print("c");
  u8g2.setCursor(0,30);
  u8g2.print("Pressure is:"); 
  u8g2.print(thePressure);
  u8g2.print("hp");
  u8g2.setCursor(0,40);    

if (thePressure > 1005){
 u8g2.print("STOM WARNING!");
} else {
  u8g2.print("good wearger"); 
}


  u8g2.sendBuffer();                    // transfer internal memory to the display
}