#include <stdio.h>  // For console input and ouptut
#include <string.h> // Add funcs like strlen
#include <stddef.h> // Allows for NULL pointers
#include <stdlib.h> // malloc etc.

int main(int argc, char *argv[]) { 
    int len = 0;

    printf("Provide the max length of your char string: ");
    scanf("%d", &len);

    char *ptr = (char*)malloc(len);

    printf("Provide the string itself: ");
    scanf("%s", ptr);

    printf("You provided: %s\n", ptr);

    return 0;
}


