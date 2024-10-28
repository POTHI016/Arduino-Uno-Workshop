#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Address 0x27, 16 columns, 2 rows

void setup() {
  // initialize the LCD with 16 columns and 2 rows
  lcd.begin(16, 2);  // Corrected the begin function by adding arguments

  // Turn on the backlight and print a message
  lcd.backlight();
}

void loop() {
  // Display the first message
  lcd.clear();
  lcd.print("Hello World!");
  delay(1000);

  // Display the second message
  lcd.clear();
  lcd.print("I'm powered by");
  lcd.setCursor(3, 1);  // Set cursor to the 4th column of the 2nd row (index starts at 0)
  lcd.print("Arduino!");
  delay(1000);

  // Display the third message
  lcd.clear();
  lcd.print("Please subscribe!");
  delay(1000);

  // Display the fourth message
  lcd.clear();
  lcd.print("Goodbye!");
  delay(1000);

  // Clear the screen for the next cycle
  lcd.clear();
}
