#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for SSD1306 display connected using software SPI (default case):
#define OLED_MOSI 9
#define OLED_CLK 10
#define OLED_DC 11
#define OLED_CS 12
#define OLED_RESET 13
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,
                         OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);

/* Comment out above, uncomment this block to use hardware SPI
  #define OLED_DC     6
  #define OLED_CS     7
  #define OLED_RESET  8
  Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,
  &SPI, OLED_DC, OLED_RESET, OLED_CS);
*/

void setup()
{
  Serial.begin(9600);

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if (!display.begin(SSD1306_SWITCHCAPVCC))
  {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ; // Don't proceed, loop forever
  }

  // Show initial display buffer contents on the screen --
  // the library initializes this with an Adafruit splash screen.
  display.display();
  delay(2000); // Pause for 2 seconds

  // Clear the buffer
  display.clearDisplay();
  showText();
  showMotivation();
  showTechSkills();
  showSoftSkills();
  showOutro();
  showgitURL();
}

void loop()
{
}

void showText()
{
  display.clearDisplay();

  display.setTextSize(1);      // Normal 1:1 pixel scale
  display.setTextColor(WHITE); // Draw white text
  display.setCursor(0, 1);     // Start at top-left corner
  display.println(F("Warum Innovation ???"));
  display.display();
  delay(2000);
  display.println(F("- Neues entdecken"));
  display.display();
  delay(2000);
  display.println(F("- Andere Winkel"));
  display.display();
  delay(2000);
  display.println(F("- Grenzenlos denken"));
  display.display();
  delay(2000);
  display.println(F("- Kreativ sein"));
  display.println(F(""));
  display.println(F(":-) :-)"));
  display.display();
  delay(3000);
}

void showMotivation()
{
  display.clearDisplay();

  display.setTextSize(1);      // Normal 1:1 pixel scale
  display.setTextColor(WHITE); // Draw white text
  display.setCursor(0, 1);     // Start at top-left corner
  display.println(F("All dies"));
  display.println(F("fasziniert mich"));
  display.display();
  delay(2000);
  display.println(F(""));
  display.println(F("Daher sehe ich"));
  display.println(F("mich als ideales"));
  display.println(F("Mitglied in"));
  display.println(F("euerm Team"));
  display.display();
  delay(3000);
}
void showSoftSkills()
{
  display.clearDisplay();
  display.setTextSize(1);      // Normal 1:1 pixel scale
  display.setTextColor(WHITE); // Draw white text
  display.setCursor(0, 1);     // Start at top-left corner
  display.println(F("Softskills"));
  display.println(F(""));
  display.display();
  delay(2000);
  display.println(F("- unkompliziert"));
  display.display();
  delay(2000);
  display.println(F("- pragmatisch"));
  display.display();
  delay(2000);
  display.println(F("- immer gut drauf"));
  display.display();
  delay(2000);
  display.println(F("- optimistisch"));
  display.display();
  delay(2000);
  display.println(F("- geduldig/ausdauernd"));
  display.display();
  delay(2000);
  display.println(F("- kommunikativ"));
  display.display();
  delay(3000);
}
void showTechSkills()
{
  display.clearDisplay();
  display.setTextSize(1);      // Normal 1:1 pixel scale
  display.setTextColor(WHITE); // Draw white text
  display.setCursor(0, 1);     // Start at top-left corner
  display.println(F("Techskills"));
  display.println(F(""));
  display.display();
  delay(2000);
  display.println(F("- Angular"));
  display.display();
  delay(2000);
  display.println(F("- nodeJS"));
  display.display();
  delay(2000);
  display.println(F("- JS,HTML5,CSS3"));
  display.display();
  delay(2000);
  display.println(F("- a little iOS"));
  display.display();
  delay(2000);
  display.println(F("- Arduino :-)"));
  display.display();
  delay(2000);
  display.println(F("- CI/CD"));
  display.display();
  delay(3000);
}
void showOutro()
{
  display.clearDisplay();
  display.setTextSize(1);      // Normal 1:1 pixel scale
  display.setTextColor(WHITE); // Draw white text
  display.setCursor(0, 1);     // Start at top-left corner
  display.println(F("Es wuerde mich"));
  display.println(F("freuen wenn"));
  display.println(F("ihr euch fuer mich"));
  display.println(F("entscheided..."));
  display.println(F("Merci"));
  display.display();
  delay(3000);
}

void showgitURL()
{
  display.clearDisplay();
  display.setTextSize(1);      // Normal 1:1 pixel scale
  display.setTextColor(WHITE); // Draw white text
  display.setCursor(0, 1);     // Start at top-left corner
  display.println(F("Gruss Sven"));
  display.display();
  display.startscrollright(0x00, 0x0F);
  delay(2000);
  display.stopscroll();
  delay(1000);
  display.startscrollleft(0x00, 0x0F);
  delay(2000);
  display.stopscroll();
  delay(1000);
  display.startscrolldiagright(0x00, 0x07);
  delay(2000);
  display.startscrolldiagleft(0x00, 0x07);
  delay(2000);
  display.stopscroll();
  delay(1000);
}