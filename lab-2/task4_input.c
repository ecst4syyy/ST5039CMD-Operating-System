#include <stdio.h>

int main() {
    char name[50];

    // input and store it to name
    printf("Enter your name: ");
    scanf("%s", name);

    // output the name
    printf("Hello, %s! Welcome to the Programming and Operating System class.\n", name);

    return 0;
}