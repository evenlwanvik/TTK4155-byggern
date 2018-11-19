#ifndef UART_DRIVER_H_
#define UART_DRIVER_H_

void UART_init(unsigned long clockspeed);
void UART_transmit(unsigned char data);
unsigned char UART_receive();
uint8_t UART_receive_IoT_test();

#endif
