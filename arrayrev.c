
#include <stdio.h>
void reversearray(int arr[],int );
void reversearray_ptr(int *ptr,int );
int main()
{
    int arr[]={1,2,3,4,5,6};
    int i,len;
    len=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++)
    {
        printf("%d\t",arr[i]);
    }
    reversearray(arr,len);
    reversearray_ptr(arr,len);
    return 0;
}
void reversearray_ptr(int *ptr,int len)
{
    printf("entering second maethod");
    int temp,i,j;
    for(i=0,j=len-1;i<j;i++,j--)//
    {
        temp=*(ptr+i);
       *(ptr+i) =*(ptr+j);
        *(ptr+j)=temp;
    }
    printf("reverse of anarray:");
    for(i=0;i<len;i++)
    {
        printf("%d\t",ptr[i]);
    }
   
}
void reversearray(int arr[],int len)
{
    int temp,i,j;
    for(i=0,j=len-1;i<j;i++,j--)//
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("reverse of anarray:");
    for(i=0;i<len;i++)
    {
        printf("%d\t",arr[i]);
    }
}
