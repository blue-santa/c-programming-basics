#include <stdio.h>  // For console input and ouptut
#include <string.h> // Add funcs like strlen
#include <stddef.h> // Allows for NULL pointers

void copyString(char *to, char *from);

int main(int argc, char *argv[]) { 

    char myString[] = "my string";
    char to[50];

    copyString(to, myString);

    printf("to: %s\n", to); 

    return 0;
}

void copyString(char *to, char *from) {
    while (*from) {
        *to = *from;
        ++to;
        ++from;
    }
    *to = '\0';
}

