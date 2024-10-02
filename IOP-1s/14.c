#include <stdio.h>

int main() {
    // Declare variable
    char ch;

    // Input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check character type
    if (ch >= 'A' && ch <= 'Z')
        printf("Capital letter\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Small case letter\n");
    else if (ch >= '0' && ch <= '9')
        printf("Digit\n");
    else
        printf("Special symbol\n");

    return 0;
}