#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { 

    printf("%zd\n", sizeof(int));
    printf("%zd\n", sizeof(char));
    printf("%zd\n", sizeof(long));
    printf("%zd\n", sizeof(long long));
    printf("%zd\n", sizeof(double));
    printf("%zd\n", sizeof(long double));

    return 0; 
}
