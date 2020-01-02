#include <stdio.h>

int main(int argc, char *argv[]) { 

    float hardData[5][12] = {
        {5.9, 4.3, 1.2, 5.3, 5.5, 2.1, 3.6, 2.1, 1.2, 1.3, 9.7, 3.1},
        {3.9, 2.3, 1.2, 5.3, 0.5, 2.1, 3.6, 7.1, 1.2, 1.3, 3.7, 2.1},
        {5.9, 4.3, 1.4, 5.3, 5.1, 2.1, 0.6, 2.1, 2.8, 1.7, 3.1, 5.1},
        {2.9, 4.3, 0.4, 5.3, 1.1, 2.1, 0.6, 2.1, 2.8, 1.5, 0.5, 5.1},
        {1.5, 3.0, 2.9, 5.3, 3.7, 1.8, 0.6, 1.9, 2.1, 1.7, 7.1, 5.1},
    };

    float yearlyAverages[5] = {0};
    float monthlyAverages[12] = {0};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 12; j++) { 
            monthlyAverages[j] += hardData[i][j];
            yearlyAverages[i] += hardData[i][j];
        }
    }

    float totalYearlyAverage;

    printf("YEAR    RAINFALL (INCHES)\n");
    for (int i = 0; i < 5; i++) {
        yearlyAverages[i] = yearlyAverages[i] / 12;
        totalYearlyAverage += yearlyAverages[i];
        printf("%d    %5.2f\n", 2010 + i, yearlyAverages[i]);
    }

    totalYearlyAverage = totalYearlyAverage / 5;
    printf("\nTotal Year Average: %.3f\n", totalYearlyAverage);


    printf("\nJAN FEB MAR APR MAY JUN JUL AUG SEP OCT NOV DEC\n");

    for (int j = 0; j < 12; j++) {
        monthlyAverages[j] = monthlyAverages[j] / 5;
        printf("%3.1f ", monthlyAverages[j]);
    }

    printf("\n"); 

    return 0; 
}
