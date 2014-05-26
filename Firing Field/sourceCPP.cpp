/**
 * @brief Функция отправки дебага через UART пульта
 * @detailed Функция отправляет в UART пульта массив указанный в параметре *sendChar, 
 или данные установленные внутри функции (при sendDataLength = 0).
 * @param sendDataLength длина массива данных для отправки в дебаг, если равно нулю, то
 использовать внутренние установки буфера передачи.
 * @param *sendChar указатель на данные для отправки в дебаг.
 * @todo Перенести функцию в debug.h
 */
void sendDebug(char sendDataLength, char *sendChar) {
  c_buf_data_pult = 0;
  if (sendDataLength != 0) {
    while (c_buf_data_pult < sendDataLength) {
      buf_data_pult[c_buf_data_pult] = *(sendChar + c_buf_data_pult);
      c_buf_data_pult++;
    }
  }
  else {
    buf_data_pult[c_buf_data_pult] = asu_buf_proc[0];
    c_buf_data_pult++;
    buf_data_pult[c_buf_data_pult] = asu_buf_proc[1];
    c_buf_data_pult++;
    buf_data_pult[c_buf_data_pult] = asu_buf_proc[2];
    c_buf_data_pult++;
    buf_data_pult[c_buf_data_pult] = asu_buf_proc[3];
    c_buf_data_pult++;
    buf_data_pult[c_buf_data_pult] = asu_buf_proc[4];
    c_buf_data_pult++;
  }

//  new_send_pult
  count_recv_pult=0;
  TX9D1=1;
  SX1=1;
  TXREG1=numer_pult;
  en_send_pult=1;
}