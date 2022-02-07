#include <stdio.h>

int main()
{
    int i;
    printf("even numbers are :");
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
    printf("odd numbers are :");
    for(i=1;i<=100;i++)
    {
        if(i%2==1)
        {
            printf("%d\t",i);
        }
    }

    return 0;
}
