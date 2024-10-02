#include <stdio.h>

int main() {
    // Declare variables
    int hours, minutes, seconds, total;

    // Input time
    printf("Enter time in hours, minutes, and seconds: ");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    // Calculate total seconds
    total = hours * 3600 + minutes * 60 + seconds;

    // Print result
    printf("Total seconds: %d\n", total);

    return 0;
}