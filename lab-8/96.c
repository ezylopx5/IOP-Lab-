//program to sort the strings by using a pointer
#include<stdio.h>
#include<string.h>
//making a function for it
void sorting(char* in)
{
int max = (int)*(in);
char str1[40];
strcpy(str1,in);
char* ptr2 = str1;

for(int j = 0 ; *(in+j) != '\0' ; j++)
{
    if(*(in+j) > max)
    {
        max = (int)*(in+j);
        *(ptr2+j) = (char)max; 
        
    }
}
// for(int k = 0 ; *(in+k) != '\0' ; k++)
// {
 printf("%s",str1);
// }
// printf("%c",(char)max);
}
int main()
{
char str[40];
//taking input from a user
puts("Enter the number of words:");
int x;
scanf("%d",&x);
//declaring pointers
char* ptr = str;

for(int i = 0 ; i <= x ; i++)
{
    fgets(str,sizeof(str),stdin);
    sorting(str);
     
}







return 0;
}