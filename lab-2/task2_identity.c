#include <stdio.h>
#include <unistd.h>

int main() {
    // Get the process ID (PID) and 
    pid_t my_pid = getpid(); 
    pid_t my_ppid = getppid();

    printf("My PID: %d\n", my_pid);
    printf("My PPID: %d\n", my_ppid);

    printf("Sleeping for 20 seconds...\n");
    sleep(20);

    return 0;
}