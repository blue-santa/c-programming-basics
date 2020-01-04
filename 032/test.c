#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>

int main(int argc, char *argv[]) { 
    int count = 10, x;
    int *int_pointer = NULL;

    int_pointer = &count;

    x = *int_pointer;

    printf("count = %i, x = %i\n", count, x); 

    return 0; 
}
