#include "uart.h"
unsigned char string_buffer[100] = "Learn-in-depth";
unsigned char const string_buffer2[100] = "Learn-in-depth";
unsigned char const string_buffer3[100] = "Learn-in-depth";
unsigned char const string_buffer4[100] = "Learn-in-depth";
void main(void)
{
	uart_send_string(string_buffer);
}