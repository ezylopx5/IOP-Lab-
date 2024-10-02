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

    // Calculate division
    float percentage = (total / 500.0) * 100;
    if (percentage >= 60)
        printf("First division\n");
    else if (percentage >= 50)
        printf("Second division\n");
    else if (percentage >= 40)
        printf("Third division\n");
    else
        printf("Fail\n");

    return 0;
}