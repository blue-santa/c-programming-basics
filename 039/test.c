#include <stdio.h>  // For console input and ouptut
#include <string.h> // Add funcs like strlen
#include <stddef.h> // Allows for NULL pointers

int main(int argc, char *argv[]) { 



    return 0;
}

void copyString1(char to[], char from[]) {
    int i;

    for ( i = 0; from[i] != '\0', ++i)
        to[i] = from [i];

    to[i] = '\0';
}

void copyString2(char *to, char *from) {
    for (; *from != '\0'; ++from, ++to)
        *to = *from;
    *to = '\0';
}
