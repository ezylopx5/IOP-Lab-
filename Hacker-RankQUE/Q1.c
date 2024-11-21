//Given a word , rearrange the letters of to construct another word in such a way that, is lexicographically greater than w
#include <stdio.h>
#include <string.h>

void Ascii(char *Aswor)
{
    char temp[100];
    int aslis[100];
    

    strcpy(temp,Aswor);
    int count = 0;
    for (int i = 0; temp[i] != '\0'; i++)
    {
        
        count++;
    }
    int l = count,x;
    int* u;
        for (int j = 0; j < count; j++)
        {
            aslis[j]=(int)temp[j];
        
        }
        if(aslis[l-1]>aslis[l-2])
        {
int up;
up = aslis[l-1];

aslis[l-1] = aslis[l-2];
aslis[l-2] = up;

    }
else{       
for( x = l-1 ; aslis[x-1]>aslis[x] && x>0;x--)
{
    
}
for(int q = x-1 ; q < l-1 ;q++)
{
if(aslis[q]>aslis[x-1])
{
u = &aslis[q];
}
}
int semp = aslis[x-1];
 aslis[x-1] = *u;
 *u = semp;
 
}
       for (int j = 0; j < count; j++)
        {
            temp[j] = (char)aslis[j];
        
        }
               for (int z = 0; z < count; z++)
        {
            printf("%c",temp[z]);
        
        }


}

    int main()
{
        int t;
        printf("Put the number of tests: ");
        scanf("%d", &t);

        char word[100];
        for (int i = 0; i < t; i++)
        {
            scanf("%s", word);
            Ascii(word);
        }



        return 0;
    }