#include<stdio.h>
int main()
{
    int arr[10],a,b,num,found=0,i;
    printf("enter how many elements:");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("enter array of elemnts:");
        scanf("%d",&arr[i]);
    }
    printf("enter search number:");
    scanf("%d",&num);
    for(i=0;i<a;i++)
    {
        if(arr[i]==num)
        {
            printf("number is found:%d",i);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("not found");
    }
}


	
