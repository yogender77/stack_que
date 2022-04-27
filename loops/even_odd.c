#include<stdio.h>
int main()
{
        int i;
        printf("even numbers are");
        for(i=0;i<101;i++)
        {
                if(i%2==0)
                {
                        printf("%d\t",i);
                }
        }
        printf("\n");
        printf("odd numbers are");
        for(i=0;i<101;i++)
        {
                if(i%2!=0)
                {
                        printf("%d\t",i);
                }
        }
}

