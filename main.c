#include <stdio.h>

int main(int argc, char *argv[]) {

    // check: got two arguments
    if (argc != 3) {
        printf("please enter 2 arguments to do calculation\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);


    return 0;
}