#include <stdio.h>

int main() {
    // Declare variables
    float fahrenheit, centigrade;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert to Centigrade
    centigrade = (fahrenheit - 32) * 5 / 9;

    // Print result
    printf("Temperature in Centigrade: %.2f\n", centigrade);

    return 0;
}