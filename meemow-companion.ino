#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128   //TO DEFINE/TELL THE ESP THAT THE SCREEN WIDTH IS THAT  (stores in a variable to be called later)
#define SCREEN_HEIGHT 64  //TO DEFINE/TELL THE ESP THAT THE SCREEN HEIGHT IS THAT (stored in a variable to be called later )
#define OLED_RESET -1 // No reset pin
// BTW #DEFINE WORDS AS --> #DEFINE X AS Y and it works around

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
 Serial.begin(9600);
 if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {   // ! --> MEANS NOT / FALSE
   Serial.println(F("SSD1306 allocation failed"));   //IF IT DOESNT DISPLAY, THEN --> PRINT "SSDI1306 allocation failed" 
   for (;;);   //BASICALLY IF "allocation failed" IT WILL STOP THE WHOLE PROGRAME
 }
  // IF YES, THEN --> DO THESE FUNCTIONS
 // SETTING UP HOW THE OLED WILL LOOK LIKE (BASICALLY, TURNING IT ON) HOW ITS DISPLAYED.
 display.clearDisplay();   // TO CLEAR OUT THE PREVIOUS DISPLAY
 display.setTextSize(1);
 display.setTextColor(WHITE);
 display.setCursor(0, 10);   // TO SET WHERE (X, Y) COORDS YOU WNAT THE DISPLAY TO BE
 display.println("Hello World!");
 display.display();   // BASICALLY PUSHES THOSE STUFF TO THE SCREEM FRPM THE BUFFER TEMPORARY MEMOTY
}
void loop() {}