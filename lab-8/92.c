//program to find biggest element in array
#include<stdio.h>
int main(){

//declaring a int array
int arr[10] = {1,22,4352,6336,6325,625,2625,22,2};

int* max = &arr[0];
for(int i = 0 ; i <10 ; i++)
{
    if(arr[i] > *max)
    {
        *max = arr[i];
    }
}

printf("%d is the bigget element in array",*max);


    return 0;
}