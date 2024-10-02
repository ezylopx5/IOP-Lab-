#include <stdio.h>

int main() {
    // Declare variables
    int marks[5], total = 0;

    // Input marks
    printf("Enter marks of five subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculate percentage
    float percentage = (total / 500.0) * 100;

    // Print result
    printf("Total: %d, Percentage: %.2f\n", total, percentage);

    return 0;
}