#include <stdio.h>

int main() {
    // Declare variables
    int a, b;

    // Input values
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Print result
    printf("Swapped numbers: %d %d\n", a, b);

    return 0;
}