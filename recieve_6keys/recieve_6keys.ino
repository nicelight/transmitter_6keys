/// RF приемник
/// сигнальный провод с приемника на пин 11 arduino nano

#include <RH_ASK.h>
#include <SPI.h> // в скетче не используется, но нужна для компиляции

RH_ASK driver;

void setup() {
  Serial.begin(115200); // только в отладочных целях

  Serial.println("Trying init..");
  while (!driver.init()) {
    Serial.println("init failed");  //  "Инициализация не удалась"
    delay(500);
  }
  Serial.println("RF reciever init done.");
}//setup

void loop() {
  recieve();
}// loop
