#include <stdio.h>

int main()
{
    int arr[5]={5,10,15,20,25};
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("value of arr[%d]=",i);
        printf("%d\n",*(arr+i));
        printf("%d\t",arr[i]);
        printf("%d\t",*(i+arr));
        printf("%d\t",i[arr]);
        printf("address of arr[%d]=%p",i,&arr[i]);
    }

    return 0;
}
