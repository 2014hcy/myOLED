#ifndef OLED_H
#define OLED_H

#include "Arduino.h"
#include "stdint.h"

void init_OLED(uint8_t I2C_ADDR);
void write(String Text);
void writeln(String Text);
void displaying();
void clear();

#endif
