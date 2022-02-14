
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
        printf("0");
    }
    else
    {
        printf("1");
    }
    return 0;
}
