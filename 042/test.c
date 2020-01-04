#include <stdio.h>  // For console input and ouptut
#include <string.h> // Add funcs like strlen
#include <stddef.h> // Allows for NULL pointers

void square(int * const x);

int main(int argc, char *argv[]) { 

    int x = 9;

    square(&x);

    printf("x: %d\n", x);

    return 0;
}

void square(int * const x) {
    *x = (*x) * (*x);
}

