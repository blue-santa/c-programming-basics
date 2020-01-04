#include <stdio.h>  // For console input and ouptut
#include <string.h> // Add funcs like strlen
#include <stddef.h> // Allows for NULL pointers

int main(int argc, char *argv[]) { 

    char multiple[] = "a string";
    char *p = multiple;

    for (int i = 0; i < strlen(multiple) ; ++i)
    {
        printf("multiple[%d] = %c *(p + %d) = %c &multiple[%d] = %p p+%d = %p\n", i, multiple[i], i, *(p + i), i, &multiple[i], i, p+i);

    }

    long funcmult[] = {15L, 25L, 35L, 45L};
    long *pFunc = funcmult;

    for (int i = 0; i < sizeof(funcmult)/sizeof(funcmult[0]); ++i)

    {
        printf("address pFunc+%d (&funcmult[%d]): %llu  *(pFunc+%d) value: %ld\n", i, i, (unsigned long long)(pFunc + i), i, *(pFunc + i));
    } 

    printf("\n Type long occupies: %d bytes\n", (int)sizeof(long));

    return 0;
}

