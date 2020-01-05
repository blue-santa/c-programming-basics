#include <stdio.h>  // For console input and ouptut
#include <string.h> // Add funcs like strlen
#include <stddef.h> // Allows for NULL pointers
#include <stdlib.h> // malloc etc.

void getinfo (struct namect * pst) {

    char temp[SLEN];
    printf("Please enter first name: ");
    s_gets(temp, SLEN);

    pst->fname = (char*)malloc(strlen(temp) + 1);

    strcpy(pst->fname, temp);
    printf("Please enter your last name.\n");
    s_gets(temp, SLEN);
    pst->lname = (char*)malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);

}

int main(int argc, char *argv[]) { 



    return 0;
}


