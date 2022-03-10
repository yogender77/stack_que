
#include <stdio.h>
#define SIZE 5
void reverse(int* ,int* );
int main()
{
    int arr[SIZE];
    int arr1[SIZE];
    int i,n;
    printf("enter first array:");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter second array:");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&arr1[i]);
    }
    void (*fp)(int *arr,int *arr1);
    fp=reverse;
    fp(arr,arr1);

    return 0;
}
void reverse(int *arr,int *arr1)
{
    int i,temp;
    for(i=0;i<5;i++)
    {
      temp=*(arr+i);
      *(arr+i)=*(arr1+i);
      *(arr1+i)=temp;
    }
    printf("fisrt array");
     for(i=0;i<SIZE;i++)
    {
        printf("%d\n",*(arr+i));
    }
    printf("second array:");
    for(i=0;i<SIZE;i++)
    {
        printf("%d\n",*(arr1+i));
    }
}
