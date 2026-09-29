#include <stdio.h>

int main() {
    int num;
    printf("Enter a number (positive for success and negative for failure): ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("Exited Successfully\n");
        return 0; // Tell OS that program succeeded
    } else {
        printf("Exited with Failure\n");
        return 1; // Tell OS that program failed
    }
}