#include<stdio.h>
#include "math_utils.h"

int main() {
    int a,b;
    // Prompt the user for input
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    // Call the functions from math_utils.h
    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", sub(a, b));
    return 0;
}