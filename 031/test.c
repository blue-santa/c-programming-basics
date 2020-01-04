#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void adaptStr(char *str);
void bubbleSort(char *str1, char *str2, char *str3);

int main(int argc, char *argv[]) { 

    char str[] = "abcdefg";

    adaptStr(str);

    printf("reversed: %s\n", str);

    char str1[50] = "hijklmnop"; 
    char str2[50] = "abcdefg"; 
    char str1[50] = "qrstuvwxyz"; 

    return 0;
}

void adaptStr(char *str) { 
    long int len = strlen(str);
    char temp[len];

    strcpy(temp, str);

    for (int i = 0; i <= len; i++) {
        str[i] = temp[len - i - 1];
    }
}

void bubbleSort(char *str1, char *str2, char *str3) { 

    long int len1 = strlen(str1);
    long int len2 = strlen(str2);
    long int len3 = strlen(str3);

    int res1 = strcmp(str1, str2);
    int res2 = strcmp(str1, str3);
    int res3 = strcmp(str2, str3);

    int loc1 = 0;
    int loc2 = 1;
    int loc3 = 2;

    if (res1 != 1) {
        int temp = loc1;
        loc1 = loc2;
        loc2 = temp;
    }

    if (res2 != 1) {
        int temp = loc1;
        loc1 = loc3;
        loc3 = temp;
    }

    if (res3 != 1) {
        int temp = loc2;
        loc2 = loc3;
        loc3 = temp;
    }



}
