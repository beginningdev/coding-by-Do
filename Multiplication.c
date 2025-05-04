#include<stdio.h>
// This program calculates the multiplication of two numbers
// and prints the result to the console.
// It uses the standard input/output library and conio.h for console input/output functions.
// The program prompts the user to enter two numbers,
// reads the numbers from the console, calculates their multiplication,
// and prints the result to the console.
// The program uses the return statement to exit the main function.
// The program uses the getch function to wait for a key press before exiting.
int main()
{
    int a, b, mul;
    printf("Enter two numbers: ");
    scanf("%d \n%d", &a, &b);
    mul = a * b;
    printf("\nMultiplication = %d\n", mul);
    return 0;
}