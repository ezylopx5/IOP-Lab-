//program to square and cube to entered number by using a pointers
#include<stdio.h>
int main()
{
int a;
printf("enter the number: ");
scanf("%d",&a);

int* ptr;
ptr = &a;
printf("square of %d:%d",a,(*ptr)*(*ptr));
printf("square of %d:%d",a,(*ptr)*(*ptr)*(*ptr));


return 0;
}