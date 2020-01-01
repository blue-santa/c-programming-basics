#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { 

    _Bool a = 1;
    _Bool b = 0;
    _Bool result;

    result = a | b;

    printf("Result is: %d\n", result);

    return 0; 
}
