#include <stdio.h>

int main() {
    // Declare variables
    int total, hours, minutes, seconds;

    // Input total seconds
    printf("Enter total seconds: ");
    scanf("%d", &total);

    // Calculate hours, minutes, and seconds
    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;

    // Print result
    printf("Time: %d hours %d minutes %d seconds\n", hours, minutes, seconds);

    return 0;
}