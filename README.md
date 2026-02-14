# myOLED - the OLED lib for beginner

It's for the beginner. This lib can make you use "Adafruit SSD1306" lib very easy, but you must installed "Adafruit SSD1306" lib first.

## Install

1. Install "Adafruit_SSD1306" lib use Arduino IDE or Arduino CLI.
2. [Install](https://github.com/2014hcy/myOLED/archive/refs/heads/main.zip) myOLED lib.
3. Extract Zip file to your folder.
4. Use Arduino and my lib to makes a perfet works!

## Instructions

**init_OLED(uint8_t I2C_ADDR)** function is for init the OLED. "I2C_ADDR" is your OLED I2C address. You can put it in the setup() function.<br>
**write(String Text)** function is writing string on the OLED with no new lines and no display.<br>
**writeln(String Text)** function is writing string on the OLED with newline and no display.<br>
**displaying()** function is for display the Text. It can make display two or more lines smooth.
**clear()** function is for clear the OLED and set Cursor to the "0, 0".

## At last

I am a Chinese people. My English is not so good. The ***Chinese New Year*** is Comming! Wish you all a happy **New Year**!!!
**Thanks for your download!!!**
