#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int add(int x, int y);
int mult(int x, int y);
int sub(int x, int y);
int division(int x, int y);
int64_t mod_func(int64_t a, int64_t n);

int main(int argc, char *argv[]) {

    // check: got two arguments
    if (argc != 3) {
        printf("please enter 2 arguments to do calculation\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d * %d = %d\n", a, b, mult(a, b));
    printf("%d / %d = %d\n", a, b, division(a, b));
    printf("%"PRId64" mod %"PRId64" = %"PRId64"\n", (int64_t)a, (int64_t)b, mod_func((int64_t)a, (int64_t)b));
    
    return 0;
}
