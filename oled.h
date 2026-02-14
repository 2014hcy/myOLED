#ifndef OLED_H
#define OLED_H

#include <Arduino.h>

void init_OLED(I2C_ADDR);
void write(String Text);
void writeln(String Text);
void displaying();
void clear();

#endif
