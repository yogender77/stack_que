/*
1
**
222
****
33333
******
*/
#include <stdio.h>

int main()
{
    int i,j,n=1;
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%d",n);//1
            }
            else
            {
                
            printf("*");//**
            }
        }
        if(i%2==0)
        {
            n++;
        }
        printf("\n");
    }

    return 0;
}
