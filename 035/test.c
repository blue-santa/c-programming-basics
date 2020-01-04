#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>

int main(int argc, char *argv[]) { 
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;

    pnum = &num1;
    *pnum = 2L;
    
    ++num2;
    num2 += *pnum;

    pnum = &num2;
    ++*pnum;

    printf("num1 = %ld\nnum2 = %ld\n*pnum = %ld\n*pnum + num2 = %ld\n", num1, num2, *pnum, *pnum + num2);

    return 0; 
}
