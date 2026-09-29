# Lab 2.1 - Anatomy of Compiled File

## Overview
In this lab, we will understand how a C program using multiple library functions link to the standard library consisting of the header files, examine physical existence of C library headers and compiled binaries, and finally the difference between static linking and dynamic linking.

## Learning Objectives
- Use multiple functions from different C standard libraries

## C Standard Library Usage
### Concept
Multiple useful functions are already implemented in C for reusability. In this task, we have demonstrated the use of multiple functions from C standard libraries (**libc**). To be precise, we have used functions to get process and time information from standard libraries such as `unistd.h` and `time.h` respectively

### Commands
```bash
# Compile the source code
gcc procinfo.c -o procinfo

# Run the program
./procinfo
```

### Evidences
![C standard library usage](./images/lab-1.png)

We have used various functions for different purposes. `getpid()` and `getppid()` were used to extract the process ID information. `time()` and `localtime()` were used to ask OS for the current time and structure it properly.

> [!NOTE]
> Concept of pointer is applied in this program, so basically `time(NULL)` gets the current time from OS i.e. only machine readable and stores it in `current_time`, thereafter, `localtime(&current_time)` creates a proper human readable struct and stores the memory address of it in pointer `time_info`, and the pointer variable simply points to `struct tm` structure now.