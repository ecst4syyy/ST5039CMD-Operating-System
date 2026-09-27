/* A simple C program to do basic mathematical oepration */
#include <stdio.h>

int main() {
    int num_one, num_two, sum, difference, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &num_one, &num_two);

    sum = num_one + num_two;
    difference = num_one - num_two;
    product = num_one * num_two;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    return 0;
}