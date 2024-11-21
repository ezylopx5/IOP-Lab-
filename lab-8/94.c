//reverse the string by using pointers
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
//input from user
puts("Enter the word: ");
fgets(str,sizeof(str),stdin);
char* ptr=str;
int count = 0;
for(int i = 0 ; *(ptr+i) != '\0'; i++)
{
    count++;
}

for(int j = count-1 ; j >= 0; j--)
{
    printf("%c",*(ptr+j));
}
return 0;
}