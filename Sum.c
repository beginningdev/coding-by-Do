#include<stdio.h>
// This program calculates the sum of two numbers
// and prints the result to the console.
// It uses the standard input/output library and conio.h for console input/output functions.
// The program prompts the user to enter two numbers,
// reads the numbers from the console, calculates their sum,
// and prints the result to the console.
// The program ends by waiting for a key press before exiting.
// The program is written in C language.
// The program is a simple demonstration of basic arithmetic operations in C.
// The program is intended for educational purposes and can be used as a starting point for learning C programming.
// The program is a simple calculator that adds two numbers.
// The program is a simple example of how to use variables, input/output functions, and arithmetic operations in C.
int main()
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d \n%d", &a, &b);
    sum = a + b;
    printf("\nSum = %d\n", sum);
    return 0;
    // The program uses the printf function to print messages to the console.
    // The program uses the scanf function to read input from the console.
    // The program uses the return statement to exit the main function.
}