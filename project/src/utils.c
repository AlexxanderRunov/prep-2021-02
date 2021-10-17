#include <stddef.h>
#include <stdio.h>
#include "utils.h"

size_t timer_from(int from) {
    size_t counter = 0;
    for (int i = from; i >= 0; --i) {
        ++counter;
        printf("%d", i);
        if (i > 0) printf(" ");
        if (i == 0) printf("\n");
    }
    return counter;
}


int custom_pow(int base, int power) {
    int res = 1;
    while (power)
        if (power & 1) {
            res *= base;
            --power;
        } else {
            base *= base;
            power >>= 1;
        }
    return res;
}

