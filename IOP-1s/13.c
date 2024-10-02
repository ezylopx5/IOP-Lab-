#include <stdio.h>

int main() {
    // Declare variable
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if even or odd
    if (num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}