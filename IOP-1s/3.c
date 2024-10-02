#include <stdio.h>

int main() {
    // Declare variables
    float basic, gross;

    // Input basic salary
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    // Calculate gross salary
    gross = basic + (basic * 0.2) + (basic * 0.1);

    // Print result
    printf("Gross Salary: %.2f\n", gross);

    return 0;
}