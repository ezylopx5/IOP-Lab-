#include <stdio.h>

int main() {
    // Declare variables
    long seconds = 31558150;
    int days, hours, minutes;

    // Calculate days, hours, and minutes
    days = seconds / 86400;
    hours = (seconds % 86400) / 3600;
    minutes = (seconds % 3600) / 60;

    // Print result
    printf("Days: %d, Hours: %d, Minutes: %d\n", days, hours, minutes);

    return 0;
}