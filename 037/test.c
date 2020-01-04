#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>

int arraySum (int *ptr, const int n);

int main(int argc, char *argv[]) { 
    int values[100];

    values[10] = 10;

    int *pValues = NULL;

    pValues = &values[0];

    *(pValues + 10) += 15;

    printf("values[10]: %d\n", values[10]);

    int funcVal[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

    printf("The sum is %i\n", arraySum(funcVal, 10));

    return 0; 
}

int arraySum(int *ptr, const int n) {
    int sum = 0;
    int *const arrayEnd = ptr + n;

    for (; ptr < arrayEnd; ++ptr) {
        sum += *ptr;
    }

    return sum;
}

