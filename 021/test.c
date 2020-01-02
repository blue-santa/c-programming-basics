#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int greatestComDenom(const int x, const int y) {
    int a;
    int b;
    int c;
    int greatesD;

    if (x < 0) {
        b = x * -1;
    } else {
        b = x;
    }

    if (y < 0) {
        c = y * -1;
    } else {
        c = y;
    }

    if (b > c) {
        a = c;
    } else {
        a = b;
    }

    for (int i = 1; i <= a; i++) {

        _Bool fitsB = 0;
        _Bool fitsC = 0;

        if (b % i == 0) {
            fitsB = 1;
        }

        if (c % i == 0) {
            fitsC = 1;
        }

        if (fitsB && fitsC) {
            greatesD = i;
        }

    }

    return greatesD;

}

float absoluteVal(float x) {
    if (x < 0) 
        x = x * -1;

    return x; 
}

float calSquare(float x) {

    x = absoluteVal(x);

    double a;
    a = sqrt((double)x);
    x = (float)a;

    return x; 
}

int main(int argc, char *argv[]) { 

    if (argc < 2) {
        printf("Please provide two integers.");
        exit(1);
    } 

    int x = atoi(argv[2]);
    int y = atoi(argv[3]);

    printf("\nx: %d", x);
    printf("\ny: %d", y);

    float b = (float) x;

    int condenom = greatestComDenom(x, y);
    float absV = absoluteVal(b);
    float square = calSquare(b);

    printf("\ncondenom: %d", condenom);
    printf("\nabsV: %.2f\n", absV);
    printf("\nsquare: %.2f\n", square);

    return 0; 
}
