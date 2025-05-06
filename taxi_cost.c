#include<stdio.h>
void write_file(float total_cost);
// This is a simple C program to calculate the cost of a taxi ride
//The first kilometer costs 15$
//The second kilometer to the five kilometer costs 13.5$
//The sixth kilometer to the One-hundred twenty kilometer costs 11$
//If the distance is more than 120 kilometers, the total cost is reduced by 10%
//The vat is 10%

float calculate_cost(int distance) {
    float cost = 0;
    float vat = 0;
    if (distance <= 1) {
        cost = 15;
    } else if (distance <= 5) {
        cost = 15 + (distance - 1) * 13.5;
    } else if (distance <= 120)
        cost = 15 + (4 * 13.5) + ((distance - 5) * 11);
    if(distance > 120) {
        cost = 15 + (4 * 13.5) + ((distance - 5) * 11);
        cost = cost * 0.9; // Apply 10% discount
    }
    
    // Add VAT
    vat = cost * 0.08;
    cost += vat;
    // Return the total cost
    return cost;
}

int main() {
    int distance;
    printf("Enter the distance in kilometers: ");
    scanf("%d", &distance);
    float total_cost = calculate_cost(distance);
    write_file(total_cost);
    //printf("The total cost of the taxi ride is: %.1f $\n", total_cost);
    return total_cost;
}

void write_file(float total_cost) {
    // Write the total cost to a file
    FILE *file;
    file = fopen("taxi_cost.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(file, "The total cost of the taxi ride is: %.1f $\n", total_cost);
    fclose(file);
}