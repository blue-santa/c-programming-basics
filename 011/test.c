#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { 

    unsigned int a = 60; // 0011 1100 
    unsigned int b = 13; // 0000 1101
    unsigned int result;

    result = b >> 1;
    // 0000 0110

    printf("result is: %d\n", result);

    return 0; 
}
