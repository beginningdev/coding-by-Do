#include <stdio.h>

/**
 * Tính diện tích hình chữ nhật
 */
int compute_rectangle_area(int length, int width) {
    return length * width;
}

int main() {
    int length = 5;
    int width = 10;

    int area = compute_rectangle_area(length, width);

    printf("Area: %d\n", area);
    return 0;
}
// This code is a simple C program that calculates the area of a rectangle.
// It defines a function `compute_rectangle_area` that takes the length and width of the rectangle as parameters
// and returns the area. The `main` function initializes the length and width, calls the area function,
// and prints the result to the console. The program is well-structured and easy to read, following good coding practices.
// The function names are descriptive, and the code is organized into logical sections.
// The use of comments helps explain the purpose of the code, making it easier for others to understand.