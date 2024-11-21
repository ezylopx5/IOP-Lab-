//Calculating average of candies 
#include<stdio.h>
#include<stdio.h>
int main()
{

int n,m,a,b,k,t;    
printf("Enter the 'N' & 'M':");//N is the number of jars and M is the number of the operations
scanf("%d %d",&n,&m);
int jar[n];
//taking input fo a,b,k
printf("Enter the a, b, k respectively:");
for(int i = 0 ; i< m ;i++)
{
    scanf("%d %d %d",&a,&b,&k);
    for(int i =a; i <= b ;i++)
{
jar[i] = k+t;
}
    
}





//calculating the average of candies
int avg,sum = 0;
for(int x = 0 ; x<n; x++)
{
    avg=sum+jar[x];
}
printf("The Average is %d :",avg/n);

return 0;
}