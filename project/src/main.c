#include <stdlib.h>
#include "is_prime.h"
#include "utils.h"
#include "sequence.h"

#define ERR_ARGS_COUNT (-1)
#define ERR_WRONG_FLG (-2)

#define TST_FOO_FIX     1
#define TST_FOO_IMPL    2
#define TST_MOD_IMPL    3
#define TST_MOD2_IMPL   4

int main(int argc, const char **argv) {
    if (argc < 3) {
        return ERR_ARGS_COUNT;
    }

    char *argv_end;
    int Test_case = (int) strtol(argv[1], &argv_end, 10);
    const char *data;
    data = argv[2];

    switch (Test_case) {
        case TST_FOO_FIX: {
            int to = (int) strtol(data, &argv_end, 10);
            size_t ticks_count = timer_from(to);

            printf("%zu", ticks_count);
            break;
        }
        case TST_FOO_IMPL: {
            if (argc == 4) {
                int base = (int) strtol(data, &argv_end, 10);
                int pow = (int) strtol(argv[3], &argv_end, 10);
                int res = custom_pow(base, pow);

                printf("%i\n", res);
            } else {
                return ERR_ARGS_COUNT;
            }
            break;
        }
        case TST_MOD_IMPL: {
            int num = (int) strtol(data, &argv_end, 10);
            int prime = prime_or_not(num);

            printf("%d", prime);
            break;
        }
        case TST_MOD2_IMPL: {
            int n = (int) strtol(data, &argv_end, 10);

            print_sequence(n);
            break;
        }

        default: {
            return ERR_WRONG_FLG;
        }
    }
    return 0;
}

