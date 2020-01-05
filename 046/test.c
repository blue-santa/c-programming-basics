#include <stdio.h>  // For console input and ouptut
#include <string.h> // Add funcs like strlen
#include <stddef.h> // Allows for NULL pointers
#include <stdlib.h> // malloc etc.

struct date {
    int month;
    int day;
    int year;
};

int main(int argc, char *argv[]) { 
    
    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2015;



    printf("date is: %i/%i/%.2i\n", datePtr->month, datePtr->day, datePtr->year % 100);

    return 0;
}


