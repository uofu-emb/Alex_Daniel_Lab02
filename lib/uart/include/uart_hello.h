#pragma once

#ifdef TESTING_ENV
struct device {};
#else
#include <drivers/uart.h>
#endif

void echo_uppercase(const struct device *dev);

int test_uart_in(const struct device *dev, char *ch);

void test_uart_out(const struct device *dev, char ch);
