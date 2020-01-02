#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) { 

    char buf[100];
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0;

    printf("Enter an interesting string of less than %d characters:\n", 100);

    scanf("%s", buf);

    int i = 0;

    while (buf[i]) {
        if (isalpha(buf[i]))
            ++nLetters;
        else if (isdigit(buf[i]))
            ++nDigits;
        else if (ispunct(buf[i]))
            ++nPunct; 
        ++i; 
    }

    printf("\nThe string contains %d letters, %d digits, and %d punctuation characters\n", nLetters, nDigits, nPunct); 

    return 0; 
}
