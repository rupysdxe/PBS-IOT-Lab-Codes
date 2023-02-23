//Connection
// SCL - D3
// SDA - D4
// GND - GND
// VCC - VIN OR 3VC

// req libs
#include <Wire.h>

#include <LiquidCrystal_I2C.h> 

LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup(){

 Serial.begin(115200);
 Wire.begin(2,0);
 lcd.begin();   // initializing the LCD
 lcd.backlight(); // Enable or Turn On the backlight
 lcd.setCursor(0,0);
 lcd.print("PBS Attendence"); // Start Printing
 lcd.setCursor(0, 1);
 lcd.print("    System");
}
void loop(){
 // Nothing Absolutely Nothing!
 Serial.print("Hello");

}

