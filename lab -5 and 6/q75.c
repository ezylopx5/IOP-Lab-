#include<stdio.h>
int main()
{
    int nstudents =10;//intializing the variable with value 10
    int result[10][4];//declaration of an array to store the result
    //storing data from the user
    for(int i =0; i <nstudents; i++)
    {
     printf("Enter the roll no. of student: ");
     scanf("%d",&result[i][0]); 

     printf("Enter marks of subject 1: ");
     scanf("%d",&result[i][1]);

     printf("Enter marks of subject 2: ");
     scanf("%d",&result[i][2]);

     printf("Enter marks of subject 3: ");
     scanf("%d",&result[i][3]);




    }
    printf("Roll No.\tSubject1\tSubject2\tSubject3");



    //printing the array
    for(int i =0; i <10; i++)
    {
        for(int j =0; j <4; j++)
        {
            printf("%d\t\t",result[i][j]);
        }
        printf("\n");
    }


}