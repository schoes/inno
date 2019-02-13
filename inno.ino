#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 4);
  // Print a message to the LCD.
  lcd.setCursor(0, 1);
  lcd.print("Innovation ?");
  delay(2000);
  printLine(3, "Grenzen sprengen");
  printLine(1, "Neues...");
  printLine(3, "...entdecken");
  printLine(1, "Kreativ sein");
  printLine(3, ":-) :-)");
  printLine(1, "Andere Wege");
  printLine(3, "suchen...");
  
  //All diese Eigenschaften bring ich mit und würde gerne bei euch im team arbeiten

}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with
  // print the number of seconds since reset:
}

void printLine(int line, String text) {
  delay(1000);
  lcd.setCursor(0, line);
  lcd.print(text);
}
