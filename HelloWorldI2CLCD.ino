#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  lcd.clear();                      // make sure the LCD is clean
  lcd.backlight();                  // turn on LCD backlight
}


void loop()
{
  lcd.setCursor(1,0);               // set position to column 1, row 0
  lcd.print("Hello, world!");       // print message to LCD
  
  lcd.setCursor(4,1);               // set position to column 4, row 1
  lcd.print("Arduino!");            // print message to LCD
  
  delay(1000);                      // wait a little while
  lcd.clear();                      // clean the LCD

  lcd.setCursor(1,1);
  lcd.print("Hello, world!");
  
  lcd.setCursor(4,0);
  lcd.print("Arduino!");
  
  delay(1000);
  lcd.clear();  
}
