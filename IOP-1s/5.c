#include <stdio.h>

int main() {
    // Declare variables
    int a, b, temp;

    // Input values
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap using third variable
    temp = a;
    a = b;
    b = temp;

    // Print result
    printf("Swapped numbers: %d %d\n", a, b);

    return 0;
}