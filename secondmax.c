
#include <stdio.h>
void decreseorder(int arr[],int );
int main()
{
    int arr[]={1,2,3,4,5,6,2,1,86,21};
    int len;
    len=sizeof(arr)/sizeof(arr[0]);
    decreseorder(arr,len);

    return 0;
}
void decreseorder(int arr[],int len)
{
    int i,j,temp;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
        if(arr[i]<arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            
        }
        }
        
    }
    printf("second maximum number=%d",arr[1]);
}
