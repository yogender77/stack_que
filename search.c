
#include <stdio.h>
#define SIZE 5
void search(int *,const int);
int main()
{
    int arr[SIZE];
    int num,i;
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter number search:");
    scanf("%d",&num);
    void (*fp)(int* ,const int);
    fp=search;
    fp(arr,num);
    return 0;
}
void search(int *arr,const int num)
{
    int i,number=0;
    for(i=0;i<SIZE;i++)
    {
        if(num==*(arr+i))
        {
            number=1;
            break;

        }
    }
    if(number==1)
    {
        printf("number is found %d",num);
    }
    else
    {
        printf("number is not found");
    }

}
