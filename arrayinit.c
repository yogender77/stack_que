#include <stdio.h>

int main()
{
    int i=0;
    char arr[5]={'a','b','c','d','k'};
    char arr1[]={'a','c','s','k','j'};
    char arr2[5];
    for(i=0;i<5;i++)
    {
        printf("enter character :");
        scanf("%c",&arr2[i]);
    }
    char arr3[5];
    arr3[0]='a';
    arr3[1]='d';
    arr3[2]='f';
    arr3[3]='l';
    arr3[4]='k';
    printf("base address=%p\n",&arr);//name of the array base address of an array
    printf("base address=%p\n",&arr1);
    printf("base address=%p\n",&arr2);
    printf("base address=%p\n",&arr3);
    
    
    printf("address of arr[0]=%p\n",&arr[0]);
    printf("address of arr[1]=%p\n",&arr[1]);
    printf("address of arr[2]=%p\n",&arr[2]);
    printf("address of arr[3]=%p\n",&arr[3]);
    printf("address of arr[4]=%p\n",&arr[4]);
    
    printf("address of arr[0]=%p\n",arr+0);
    printf("address of arr[1]=%p\n",arr+1);
    printf("address of arr[2]=%p\n",arr+2);
    printf("address of arr[3]=%p\n",arr+3);
    printf("address of arr[4]=%p\n",arr+4);
    
    printf("address of arr[0]=%p\n",&arr1[0]);
    printf("address of arr[1]=%p\n",&arr1[1]);
    printf("address of arr[2]=%p\n",&arr1[2]);
    printf("address of arr[3]=%p\n",&arr1[3]);
    printf("address of arr[4]=%p\n",&arr1[4]);
    
    printf("address of arr1[0]=%p\n",arr1+0);
    printf("address of arr1[1]=%p\n",arr1+1);
    printf("address of arr1[2]=%p\n",arr1+2);
    printf("address of arr1[3]=%p\n",arr1+3);
    printf("address of arr1[4]=%p\n",arr1+4);
    
    printf("address of arr2[0]=%p\n",&arr2[0]);
    printf("address of arr2[1]=%p\n",&arr2[1]);
    printf("address of arr2[2]=%p\n",&arr2[2]);
    
    printf("address of arr2[0]=%p\n",arr2);
    printf("address of arr2[1]=%p\n",arr2+1);
    printf("address of arr2[2]=%p\n",arr2+2);
    
    printf("address of arr3[0]=%p\n",&arr3[0]);
    printf("address of arr3[1]=%p\n",&arr3[1]);
    printf("address of arr3[2]=%p\n",&arr3[2]);
    printf("address of arr3[3]=%p\n",&arr3[3]);
    printf("address of arr3[4]=%p\n",&arr3[4]);
    
    int j=0;
    while(j<5)
    {
        printf("arr[%d]=%c\n",j,arr2[j]);
        j++;
    }
    
    int k=0;
    while(k<5)
    {
        printf("arr1[%d]=%c\n",k,arr2[k]);
        k++;
    }
    int p=0;
    while(p<5)
    {
        printf("arr2[%d]=%c\n",p,arr2[p]);
        p++;
    }
    
    int q=0;
    while(q<5)
    {
        printf("arr3[%d]=%c\n",q,arr2[q]);
        q++;
    }

    return 0;
}
