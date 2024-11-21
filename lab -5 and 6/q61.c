//PROGRAM TO SORT (BUBBLE SORT) AN ARRAY.
#include<stdio.h>
int main()
{   //taking the input from the user
    int n;
    printf("Enter the value of size of an array:  ");
    scanf("%d",&n);

    int arr[n]; //declaration of an array

    //taking input for the array
    for(int i =0; i <n; i++)
    {
        printf("Enter number:");
        scanf("%d",&arr[i]);
    }

    //bubble sort algorithm
    int count =0;
    while(count != n-1)
    {
        for(int i =0; i <n-1; i++)
    {   
        if(arr[i]>arr[i+1])
        {  
            int c =arr[i];
            arr [i] = arr[i+1];
            arr[i +1] = c;
            
        }
        else
        {
            count ++;
        }
        
    }
    }
    
    //printing the array

    for(int i =0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }

return 0;
}