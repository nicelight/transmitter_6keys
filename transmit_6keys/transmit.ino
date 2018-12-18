// проверь как будет работать с раскомментированной шестой строкой 

void transmit() {
  digitalWrite(13, 1);
  const char *msg1 = "Hello kitty ";  //  "Привет, мир!"
  //const char *msg1 = "Hello kitty " + counter;  //  "Привет, мир! mod"
  driver.send((uint8_t *)msg1, strlen(msg1));
  driver.waitPacketSent();
  delay(100);
  counter++;
  driver.send(counter, 2);
  driver.waitPacketSent();
  delay(100);
  digitalWrite(13, 0);

}//void transmit()

