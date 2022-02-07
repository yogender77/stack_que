#include <stdio.h>

int main()
{
    int n,num,sum=0,i;
    printf("enter how many numbers are ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter number:");
        scanf("%d",&num);
        if(num<=0)
        {
            break;
        }
        sum=sum+num;
    }
    printf("sum is %d",sum);
    return 0;
}
