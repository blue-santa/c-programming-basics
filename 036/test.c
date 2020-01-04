#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>

int main(int argc, char *argv[]) { 
    int val = 0;
    int *pval = NULL;

    pval = &val;

    printf("Input an integer: " );
    scanf("%d", pval);

    printf("You entered: %d\n", val);

    return 0; 
}
