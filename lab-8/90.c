//program to find length of the string including and excluding spaces by using pointers
#include<stdio.h>
#include<string.h>
int main()
{
    
    char str[100] ;
puts("Enter the Word:");
fgets(str,100,stdin);
int count = 0;
 char*ptr = str;
 for(int i = 0 ; *(ptr+i) != '\0' ;i++)
 {

    count++;
 }




printf("The length of the string is :%d",count);


return 0;
}