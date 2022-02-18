#include <stdio.h>
int recursionsum(int arr[],int);
int main()
{
    int arr[]={1,1,5,1,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    recursionsum(arr,len);
    printf("%d",recursionsum(arr,len));

    return 0;
}
int recursionsum(int arr[],int len)
{
    if(len<=0)
    {
        return 0;
    }
    return recursionsum(arr,len-1)+arr[len-1];
}
