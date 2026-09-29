#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main() {
    // Get current PID and PPID
    pid_t pid = getpid();
    pid_t ppid = getppid();

    // Get current time
    time_t current_time = time(NULL);
    struct tm *time_info = localtime(&current_time);

    // Display process information
    printf("====Process Information====\n");
    printf("My Process ID: %d\n", pid);
    printf("My Parent Process ID: %d\n", ppid);
    printf("Current Time: %s", asctime(time_info));
    printf("Exeutable Path: /proc/self/exe\n");

    return 0;
}