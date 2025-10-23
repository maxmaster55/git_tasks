#include "modulus.h"

int64_t mod_func(int64_t a, int64_t n) {
    if (n == 0) {
        fprintf(stderr, "Error: Modulo by zero.\n");
        return 0;
    }
    int64_t mod = a % n;
    if ((mod < 0)&&(n > 0))
    {
        return mod + n;
    }
    else if ((mod < 0)&&(n < 0))
    {
        return mod - n;
    }
    else
    {
        return mod;
    }
}