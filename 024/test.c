#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) { 
    char src[50], dest[50];

    strcpy(src, "This is source");

    printf("The src string is: %s\n", src);

    strcpy(dest, "This is the destination");

    printf("The dest string is: %s\n", dest);

    strncat(dest, src, 7);

    printf("Final form of dest: %s\n", dest);

    return 0; 
}
