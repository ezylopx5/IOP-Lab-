#include<stdio.h>
int main()
{   
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int i =n;
    int sum =0;
    while (i < n+10)
    {
        sum = sum +i;
        i++;
    }
    


    printf("%d",sum);
    return 0;
}