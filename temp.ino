#include "oled.h"
#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
  init_OLED(0x3C);
  delay(1000);
}

void loop() {
  delay(2000);

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("DHT11 error!");
    return;
  }

  Serial.print("Temp: ");
  Serial.print(temperature, 1);
  Serial.print("°C | ");
  Serial.print("Humi: ");
  Serial.print(humidity, 1);
  Serial.println("%");

  clear();

  write("Temp: ");
  write(String(temperature, 1));
  writeln(" C");

  write("Humi: ");
  write(String(humidity, 1));
  writeln(" %");

  displaying();
}
