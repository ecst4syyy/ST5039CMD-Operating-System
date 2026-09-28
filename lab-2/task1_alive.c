#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Starting the process...\n");

    for(int i=0; i <= 30; i++) {
        sleep(1); // This process will sleep for 1 second in each iteration
    }
    printf("Process completed.\n");
    return 0;
}