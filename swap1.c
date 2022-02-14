#include<stdio.h>
void swap(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int main()
{
    int a,b;
    int *p1=&a;
    int *p2=&b;
    printf("enter two numbers:");
    scanf("%d%d",p1,p2);
    swap(p1,p2);
    printf("after swap%d %d",a,b);
}
