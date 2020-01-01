#include <stdio.h>

int main(int argc, char *argv[]) { 

    int numbers[2][3][4];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                numbers[i][j][k] = (i + 1) * (j + 1) * (k + 1);
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("numbers[%d][%d][%d] = %d\n", i, j, k, numbers[i][j][k]);
            }
        }
    }

    return 0;

}
