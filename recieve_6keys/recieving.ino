
void recieve(){
    uint8_t buf[12];
  uint8_t buflen = sizeof(buf);
  if (driver.recv(buf, &buflen)) { // неблокирующая функция
    int i;
    // пришло сообщение с хорошей контрольной суммой,
    // выгружаем его:
    Serial.print("recieved: ");  //  "Принято Сообщение: "
    Serial.println((char*)buf);
  }// if recieve
}//void recieve()

