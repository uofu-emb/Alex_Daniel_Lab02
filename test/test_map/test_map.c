#include "map.h"
#include <unity.h>

void setUp() {}

void tearDown() {}

int add5(int x)
{
    return x + 5;
}

void test_example(void)
{
    int input[5] = {0, 1, 2, 3};
    int output[5];
    map(input, output, 4, add5);
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_example);
    return UNITY_END();
}