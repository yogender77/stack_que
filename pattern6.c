/*
    A
   bb
  CCC
 dddd
EEEEE
*/

#include <stdio.h>

int main()
{
    int i,j,k,n;
    char ch=65,ch1=97;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {  
            if(i%2==0)
            {
            printf("%c",ch);
            }
            else
            {
                printf("%c",ch1);
            }
        }
        ch++;
        ch1++;
        printf("\n");
    }

    return 0;
}
