#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { 

    if (argc <= 1) {
        printf("Width/height not provided.\n");
        exit(1);
    }

    int numberOfArguments = argc;
    char *programName = argv[0]; 

    int width = atoi(argv[1]);
    int height = atoi(argv[2]);

    int perimeter = width * 2 + height * 2;
    int area = width * height;


    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Argument 1 is the program name: %s\n", programName);
    printf("Argument 2 is the command line argument: %d\n", width);
    printf("Argument 3 is the command line argument: %d\n", height);
    printf("Perimeter is: %d\n", perimeter);
    printf("Area is: %d\n", area);


    return 0; 
}
