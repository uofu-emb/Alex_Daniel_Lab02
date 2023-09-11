#include "map.h"

void map (int *input, int *output, int size, int (*adjust)(int))
{
    for (int i = 0; i < size; i++){
        output[i] = adjust(input[i]);
    }
}