//program to flip the number:for example (1234,3) = 1432 ; (45678,4) = 48765
#include<stdio.h>
int main()
{
int x, temp = 1,sum = 1,count = 0;
printf("Put the numer: ");
scanf("%d",&x);
int num = x;
for(int j = 1 ; sum != 0;j++)
{
     sum = x/10;
     count++;
     x = sum;
}
int arr[count];
for(int i=0 ; i < count ;i++)
{
    temp = num%10;
    arr[i] = temp;
    num = num/10;
}
printf("Put the last Digit: ");
int l;
scanf("%d",&l);

for(int a = count - l,i = 1 ; a < count ; a++,i++)
{    
      arr[a] = arr[count -i];
}
for(int y = 0; y<count;y++)
{
    printf("%d",arr[y]);
}


return 0;
}