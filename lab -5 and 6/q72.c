//Write a program in C to rotate an array by k positions
#include<stdio.h>
int main()
{
    int n =5;
    // printf("Enter the value of index of array:");
    // scanf("%d",&n);

    int arr[] = {1,2,3,4,5};
    int arr1[n];
    
    // for(int i =0; i <n; i++)
    // {
    //     printf("Enter the number: ");
    //     scanf("%d",&arr[i]);
    // }
    
    //code for rotation of an array by N positions
    int k=1;
    // printf("Enter the value of N: ");
    // scanf("%d",&N);

    for(int i =0; i <n; i++)
    {
        arr1[i] = arr[(k+i)%n];
    }






  
    //printing rotated array

    for(int i =0; i<n; i++)
    {
        printf("%d ,",arr1[i]);
    }
}