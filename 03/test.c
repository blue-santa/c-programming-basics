#include <stdio.h>
#include <stdbool.h>

int main() {

    // bool myBoolean = true;
    // bool anotherBool = false;

    enum gender { male, female };
    enum gender myGender;
    myGender = male;
    enum gender anotherGender = female;

    bool isGender = (myGender == anotherGender);

    char myChar = '\n';

    printf("%c", myChar);
    printf("%d", isGender);
    printf("%c", myChar);
    return 0;
}
