#include<stdio.h>
// This program calculates the division of two numbers
// and prints the result to the console.
// It uses the standard input/output library and conio.h for console input/output functions.
float division(int a, int b) {
    // This function takes two integers as input and returns their division as a float.
    // It uses the standard input/output library and conio.h for console input/output functions.
    // The function checks if the second number is zero to avoid division by zero error.
    // If the second number is zero, it prints an error message and returns 0.0.
    // Otherwise, it performs the division and returns the result.
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0.0;
    }
    return (float)a / b;
}

void main() {
    // This is the main function of the program.
    // It prompts the user to enter two numbers,
    // reads the numbers from the console, calculates their division,
    // and prints the result to the console.
    // The program uses the return statement to exit the main function.
    // The program uses the getch function to wait for a key press before exiting.
    // The program uses the clrscr function to clear the console screen.
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d \n%d", &a, &b);
    float result = division(a, b);
    if (b != 0) {
        printf("\nDivision = %.2f\n", result);
    }
}