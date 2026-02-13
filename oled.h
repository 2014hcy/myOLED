#ifndef OLED_H
#define OLED_H

#include <Arduino.h>

void init_OLED();
void write(String Text);
void writeln(String Text);
void clear();

#endif
