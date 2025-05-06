#include <stdio.h>
#include "math_utils.h"

// Function to enter a number
int enter_number() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    return number;
}

int is_positive(int a) {
    if (a > 0) {
        printf("%d is a positive number\n", a);
        return 1; // Positive number
    } else {
        printf("%d is a negative number\n", a);
        return 0; // Negative number
    }
}

int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}


