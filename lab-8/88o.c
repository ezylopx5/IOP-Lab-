//progra to copy one array to another array by using pointers
#include <stdio.h>

int main() {
    // declaring the arrays
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[6];
//
    int* ptr1 = arr1;  
    int* ptr2 = arr2;  

    // copying elements from arr1 to arr2 using pointers
    for (int i = 0; i < 6; i++) {
        *(ptr2 + i) = *(ptr1 + i);  
    }

    printf("Array 1: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nArray 2: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}