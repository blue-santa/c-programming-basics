#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { 

    if (argc != 2) {
        printf("Please provide an initial command-line argument\n");
        exit(1);
    }

    char *initialMinutes = argv[1];
    int minutes = atoi(initialMinutes);
    int hourMins = 60;
    int dayMins = 24 * hourMins;
    int yearMins = 365 * dayMins;

    double totalYears = (double)(yearMins) / (double)(minutes);

    printf("Minutes: %d\n", minutes);
    printf("Years: %f\n", totalYears);

    return 0; 
}
