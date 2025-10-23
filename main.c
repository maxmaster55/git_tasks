#include <stdio.h>
#include <stdlib.h>

int mult(int x, int y);
int sub(int x, int y);

int main(int argc, char *argv[]) {

    // check: got two arguments
    if (argc != 3) {
        printf("please enter 2 arguments to do calculation\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d * %d = %d\n", a, b, mult(a, b));

    return 0;
}
