#include<stdio.h>// Include standard input-output library
#include "math_utils.h"// Include custom header file for math utilities

void main(){
    int number; // Declare a variable to store the number
    number = enter_number();// Call the function to enter a number
    int result = is_positive(number);// Check if the number is positive
    int sum_result = sum_to_n(number);// Calculate the sum from 1 to the entered number
    printf("Sum from 1 to %d is: %d\n", number, sum_result);// Print the result
    return;// Return from the main function
}