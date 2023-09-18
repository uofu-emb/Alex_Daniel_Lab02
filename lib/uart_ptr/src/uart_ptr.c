#include "uart_ptr.h"



void echo_uppercase(const struct device *dev, int (*uart_in)(const struct device *, char *), void (*uart_out)(const struct device *, char))
{
    char byte, up;

    do {
        if (uart_in(dev, &byte) != 0) {
            continue;
        }

        if (byte <= 'z' && byte >= 'a')
            up = byte - 'a' + 'A';
        else
            up = byte;

        uart_out(dev, up);
    } while(byte != '\n');
}

