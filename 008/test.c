#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { 

    enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT };

    enum Company myCompany1;
    enum Company myCompany2;
    enum Company myCompany3;

    myCompany1 = XEROX;
    myCompany2 = GOOGLE;
    myCompany3 = EBAY; 

    printf("1: %d\n", myCompany1);
    printf("2: %d\n", myCompany2);
    printf("3: %d\n", myCompany3);

    return 0; 
}
