#include <stdio.h>

int main()
{
    int i,sum=0,num,n;
    printf("enter how many numbers want to add:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter number:");
        scanf("%d",&num);
        if(num<=0)
        {
            continue;
        }
        sum=sum+num;
    }
    printf("sum is:%d",sum);
    return 0;
}

