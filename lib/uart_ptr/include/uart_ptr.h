#pragma once

#ifdef TESTING_ENV
struct device {};
#else
#include <drivers/uart.h>
#endif

void echo_uppercase(const struct device *dev, int (*uart_in)(const struct device *, char *), void (*uart_out)(const struct device *, char));
