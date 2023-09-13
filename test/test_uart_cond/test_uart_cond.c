#include <stdio.h>
#include <unity.h>
#include "uart_hello.h"

int char_index;
// #define TESTING_ENV

void setUp() {
    char_index = 0;
}
void tearDown() {}

void test_uart_out(const struct device *dev, char ch) {
    char expected = 'A' + char_index - 1;
    if (char_index == 27)
        TEST_ASSERT_EQUAL_CHAR('\n', ch);
    else
        TEST_ASSERT_EQUAL_CHAR(expected, ch);
}

int test_uart_in(const struct device *dev, char *ch) {
    *ch = 'a' + char_index;
    if (char_index == 26)
        *ch = '\n';
    char_index++;
    
    return 0;
}

void test_uart_cond(void) {
    echo_uppercase((const struct device *)0);
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_uart_cond);
    return UNITY_END();
}