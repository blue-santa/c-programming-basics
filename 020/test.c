#include <stdio.h>

int main(int argc, char *argv[]) { 

    int primes[100];
    int totPrimes = 0;

    for (int i = 2; i <= 100; i++) {
        printf("Testing %3d\n", i);

        if (totPrimes == 0) {
            primes[totPrimes] = i;
            totPrimes++;
            continue;
        }

        int k = 0;
        int divisorsFound = 0;
        while (k < totPrimes) {
            if (i % primes[k] == 0) {
                divisorsFound++;
            }
            k++;
        }

        if (divisorsFound == 0) {
            printf("%d is a prime number\n", i);
            primes[totPrimes] = i;
            totPrimes++;
        } 
    }

    printf("The total number of primes found is: %d\n", totPrimes); 

    return 0; 
}
