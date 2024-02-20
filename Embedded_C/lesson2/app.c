#include "uart.h"


unsigned char String1 [100] = "khaled elgazzar";

void main(void)
{
    send_uart(String1);
}