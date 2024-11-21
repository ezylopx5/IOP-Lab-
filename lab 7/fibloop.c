// 0,1,1,2,3,5
#include<stdio.h>
int main()
{
    int n=5,t1 =0,t2 =1,next_term=0;
    
    printf("%d,",t1);
    printf("%d,",t2);
    for(int i =3;i<=n;i++)
    {
        next_term = t1 +t2;
        t1 = t2;
        t2 = next_term;
    printf("%d,",next_term);


    }

}