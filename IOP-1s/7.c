#include <stdio.h>

int main() {
    // Declare variables
    float base, height, area;

    // Input values
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);

    // Calculate area
    area = 0.5 * base * height;

    // Print result
    printf("Area: %.2f\n", area);

    return 0;
}