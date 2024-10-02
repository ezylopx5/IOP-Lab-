#include <stdio.h>

int main() {
    // Declare variables
    float principal, rate, time, interest;

    // Input values
    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    // Calculate interest
    interest = (principal * rate * time) / 100;

    // Print result
    printf("Simple Interest: %.2f\n", interest);

    return 0;


}