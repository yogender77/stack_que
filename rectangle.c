
#include <stdio.h>
//int area(int ,int );
int area(int* ,int* );
int main()
{
    int len,width,result;
    printf("enter lenght:");
    scanf("%d",&len);
    printf("enter width:");
    scanf("%d",&width);
    printf("before pass arguments %d %d\n",len,width);
    //result=area(len,width);
    result=area(&len,&width);
    printf("\n%d %d",len,width);
    return 0;
}
/*
int area(int lenght,int width)
{
    int result;
    result=lenght*width;
    printf("result=%d\n",result);
}
*/
int area(int *ptr1,int *ptr2)
{
    int result=*ptr1**ptr2;
    printf("%d",result);
}
