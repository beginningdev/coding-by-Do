#include<stdio.h>
// This program calculates the difference of two numbers
// and prints the result to the console.
// It uses the standard input/output library and conio.h for console input/output functions.
// The program prompts the user to enter two numbers,
// reads the numbers from the console, calculates their difference,
// and prints the result to the console.
// The program ends by waiting for a key press before exiting.
// The program is written in C language.
// The program is a simple demonstration of basic arithmetic operations in C.
// The program is intended for educational purposes and can be used as a starting point for learning C programming.
// The program is a simple calculator that subtracts two numbers.
// The program is a simple example of how to use variables, input/output functions, and arithmetic operations in C.
// The program uses the printf function to print messages to the console.
// The program uses the scanf function to read input from the console.
int main()
{
    int a, b, diff;
    printf("Enter two numbers: ");
    scanf("%d \n%d", &a, &b);
    diff = a - b;
    printf("\nDifference = %d\n", diff);
    return 0;
    // The program uses the return statement to exit the main function.
}
// The program uses the getch function to wait for a key press before exiting.     