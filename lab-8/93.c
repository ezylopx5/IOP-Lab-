//program to count number in words in given string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
//take input from user
puts("Enter the word: ");
fgets(str,sizeof(str),stdin);
//declaring pointers
char* ptr = str;
int count = 0;
for(int i = 0; *(ptr+i) != '\0'; i++)
{

    count++;
}
printf("The total number in string is: %d ",count);


return 0;
}