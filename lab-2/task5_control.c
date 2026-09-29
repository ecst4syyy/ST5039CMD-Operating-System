#include <stdio.h>
#include <unistd.h>

int main() {
    int choice;
    printf("Process ID: %d\n", getpid());

    printf("Do you want to continue? (1 for continuing and 0 for exiting): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Continuing...\n");
        return 0;
    } else {
        printf("Exiting...\n");
        return 1;
    }
}