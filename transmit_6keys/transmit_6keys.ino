/// RF передатчик
/// сигнальный провод с передатчика на пин 12 arduino nano
#include <RH_ASK.h>
#include <SPI.h>  //  в скетче не используется,
//  но нужна для компиляции

RH_ASK driver;
byte counter = 0; // тестовая переменная, считалка

void setup()
{
  pinMode(13, OUTPUT);
  Serial.println("Trying init..");
  while (!driver.init()) {
    Serial.println("init failed");  //  "Инициализация не удалась"
    delay(500);
  }
  Serial.println("RF transmit init done.");
}//setup

void loop() {
  transmit();
  delay(1000);
}//loop
