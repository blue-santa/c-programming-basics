#include <stdio.h>  // For console input and ouptut
#include <string.h> // Add funcs like strlen
#include <stddef.h> // Allows for NULL pointers

int countString(const char *ptr);

int main(int argc, char *argv[]) { 

    char myString[] = "my string";
    char *ptr = NULL;

    ptr = myString;

    int len = 0;

    len = countString(ptr);

    printf("%d\n", len);

    return 0;
}

int countString(const char *ptr) {
    const char *ptr2 = NULL;
    ptr2 = ptr;

    while (*ptr2) { 
        ++ptr2;
    }

    int i = ptr2 - ptr; 
    return i;
}

