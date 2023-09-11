#include <stdio.h>
#include <unity.h>
#include "uart_hello.h"

int char_index;
#define TESTING_ENV

void setUp() {
    char_index = 0;
}
void tearDown() {}

void test_uart_out(const struct device *dev, char ch) {
    char expected = 'A' + char_index - 1;
    TEST_ASSERT_TRUE(ch == expected);
}

int test_uart_in(const struct device *dev, char *ch) {
    *ch = 'a' + char_index;
    if (char_index == 26)
        *ch = '\n';
    char_index++;
    
    return 0;
}

int main() {
    UNITY_BEGIN();

    return UNITY_END();
}