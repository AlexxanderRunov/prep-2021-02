#include "sequence.h"
#include <stdio.h>
#include <stdlib.h>

void print_sequence(int n) {
    if (n > 1) {
        print_sequence(n - 1);
        printf(" ");
    }
    if (n < 1) {
        print_sequence(n + 1);
        printf(" ");
    }
    printf("%d", n);
}
