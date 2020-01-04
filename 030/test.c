#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int countChars(char *arr); 
void concatResult(char *result, const char *str1, const char *str2); 
_Bool testEqualStr(const char *str1, const char *str2); 

int main(int argc, char *argv[]) { 

    int len = 0;
    char arr[] = "1234567";

    len = countChars(arr);
    
    printf("len: %d\n", len); 
    int i = 0;

    while (arr[i] != '\0') {
        printf("arr[%d]: %c\n", i, arr[i]);
        i++;
    }

    char result[100] = {'\0'};
    char str1[] = "aaaaaaaaaaaaaaa";
    char str2[] = "aaaaaaaaaaaaaaa";

    concatResult(result, str1, str2);
    printf("result: %s\n", result);

    _Bool res = testEqualStr(str1, str2);

    printf(res ? "true" : "false");

    return 0; 
}

int countChars(char *arr) {
    // Account for the '\0' null char at the end
    int count = 0;
    while (arr[count] != '\0') {
         printf("arr[%d]: %c\n", count, arr[count]);
         count++;
    } 

    return count;
}

void concatResult(char *result, const char *str1, const char *str2) {

    int i, j;

    for (i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
        printf("result[%d]: %c\n", i, result[i]);
    }

    for (j = 0; str2[j] != '\0'; j++) {
        result[j + i] = str2[j];
        
        printf("result[%d]: %c\n", j, result[i+j]);
    } 

    result[j + i] = '\0';
}

_Bool testEqualStr(const char *str1, const char *str2) {
    int i = 0;
    _Bool res = 0;

    while (
            str1[i] == str2[2] &&
            str1[i] != '\0' &&
            str2[i] != '\0'
          )
        i++;

    if (
            str1[i] == '\0' &&
            str2[i] == '\0'
       )
        res = 1;
    else
        res = 0;

    return res; 
}

