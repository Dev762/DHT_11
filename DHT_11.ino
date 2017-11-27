#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); /// REGISTER SELECT PIN,ENABLE PIN,D4 PIN,D5 PIN, D6 PIN, D7 PIN
void setup()
{
  // set up the LCD's number of columns and rows:
lcd.begin(16, 2);
Serial.begin(9600);
}
void loop()
{
// set the cursor to column 0, line 1
lcd.print("   YOUR NAME ");      //print name
lcd.setCursor(0, 1);        // set the cursor to column 0, line 2
lcd.print("YOUR CLASS");      //print class
Serial.println("hello");
delay(750);         //delay of 0.75sec
//lcd.scrollDisplayLeft();      //shifting data on LCD
lcd.setCursor(0, 0);        // set the cursor to column 0, line1
}   // Code End
