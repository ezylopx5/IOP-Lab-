//program to copy one array to another and other array's elements must be opposite to first array(revrse)
#include<stdio.h>
int main()
{
int arr1[] ={1,2,3,4,5,6};
int arr2[6];

int* ptr1 = arr1;
int* ptr2= arr2;

for(int a = 5,b = 0  ; a >= 0 ; a--,b++)
{
*(ptr2+b) = *(ptr1+a); 
}
for(int i = 0 ; i < 6 ;i++)
{
printf("%d ",arr1[i]);
}
printf("\n");
for(int i = 0 ; i < 6 ;i++)
{
printf("%d ",arr2[i]);
}



return 0;
}