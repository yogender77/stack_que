#include <stdio.h>

int main()
{
    int num,x,bit=8;
    printf("enter number :");
    scanf("%d",&num);
    x=1<<(bit-1);
    if(x&num)
    {
        printf("bit is set");
    }
    else
    {
        printf("bit is not set");
    }

    return 0;
}

