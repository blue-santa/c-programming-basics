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
    printf("int_pointer size: %d bytes\n", (int)sizeof(int_pointer));
    printf("int_pointer dereferenced size: %d bytes\n", (int)sizeof(*int_pointer));

    int number = 0;
    int *pnumber = NULL;

    number = 10;
    printf("number's address: %p\n", &number); 
    printf("number's value: %d\n\n", number);

    pnumber = &number;

    printf("pnumber's address: %p\n", (void*)&pnumber);
    printf("pnumber's size: %zd bytes\n", sizeof(pnumber));
    printf("pnumber's value: %p\n", pnumber); 
    printf("value pointed to: %d\n", *pnumber); 

    return 0; 
}
