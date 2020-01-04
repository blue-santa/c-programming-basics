#include <stdio.h>  // For console input and ouptut
#include <string.h> // Add funcs like strlen
#include <stddef.h> // Allows for NULL pointers
#include <stdlib.h> // malloc etc.

int main(int argc, char *argv[]) { 
    char *str;

    str = (char*)malloc(15);
    strcpy(str, "jason");
    printf("String = %s, Address = %u\n", str, str);

    /* Reallocating Memory */
    str = (char*)realloc(str, 25);
    strcat(str, ".com");
    printf("String = %s, Address = %u\n", str, str);

    free(str);

    return 0;
}


