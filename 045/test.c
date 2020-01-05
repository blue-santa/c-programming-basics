#include <stdio.h>  // For console input and ouptut
#include <string.h> // Add funcs like strlen
#include <stddef.h> // Allows for NULL pointers
#include <stdlib.h> // malloc etc.

struct Time {
    struct Date {
        int day;
        int month;
        int year;
    } dob;

    int hour;
    int minutes;
    int seconds;

};

struct date {
    int month;
    int day;
    int year;
};

int main(int argc, char *argv[]) { 
    
    struct date today;

    today.month = 9;
    today.day = 25;
    today.year = 2015;



    printf("date is: %i/%i/%.2i\n", today.month, today.day, today.year % 100);

    return 0;
}


