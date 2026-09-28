# Lab 3 - Investigating Process Lifecycles and OS Interaction
 
This lab contains the program files and understand how OS manages the process and resources in actual.

## Learning Objectives
1. Understanding how PID is assigned to running processes
2. 

## Task 1 - The Long Running Process

In this lab, we'll understand the concept of PID and practically demonstrate how process ID can be seen while process is actually running in the background. 

![Running-Process](../Lecture-3/images/lab-1.png)

Above it can be noticed that process is running and exited successfully, meanwhile we will verify it with `ps aux | grep 'task1'`

![](../Lecture-3/images/lab-2.png)

- PID : 50871 (assigned to the `task1` process)

## Task 2 - Process Identity (PID & PPID)
