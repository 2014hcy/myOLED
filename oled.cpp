#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "./oled.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define I2C_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void init_OLED() {
  Wire.begin();

  if(!display.begin(SSD1306_SWITCHCAPVCC, I2C_ADDRESS)) {
    for(;;);
  }
  
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
}

void write(String Text) {
  display.print(Text);
  display.display();
}

void writeln(String Text) {
  display.println(Text);
  display.display();
}

void clear() {
  display.clearDisplay();
}
