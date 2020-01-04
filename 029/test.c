#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { 

    double value = 0;
    char str[] = "3.5 2.5 1.26";
    char *pstr = str;
    char *ptr = NULL;

    while (1) {
        value = strtod(pstr, &ptr);
        if (pstr == ptr)
            break;
        else
        {
            printf(" %f", value);
            pstr = ptr; 
        }
    }

    return 0; 
}
