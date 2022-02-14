#include <stdio.h>

int main()
{
    int num,x,p;
    printf("enter number :");
    scanf("%d",&num);
    printf("enter position");
    scanf("%d",&p);
    x=num&(0x1<<p);
    if(x==0)
    {
        printf("bit is not set");
    }
    else
    {
        printf("bit is set");
    }
    return 0;
}
