#include <stdio.h>

int main()
{
    int num,x=1;
    printf("enter number :");
    scanf("%d",&num);
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

