
#include<stdio.h>
/*
 

void swap1(int ,int );
void swap11(int*,int*);
void swap2(int ,int);
void swap22(int*,int*);
void swap11(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("%d %d",*p1,*p2);
}
void swap2(int p1,int p2)
{
    p1=p1+p2;
    p2=p1-p2;
    p1=p1-p2;
    printf("%d %d",p1,p2);
}
void swap1(int p1,int p2)
{
    int temp;
    temp=p1;
    p1=p2;
    p2=temp;
    printf("%d %d",p1,p2);
}
void swap2(int *p1,int *p2)
{
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("%d %d",*p1,*p2);
}
*/

int main()
{
    int p1,p2;
    printf("enter two numbers:");
    scanf("%d%d",&p1,&p2);
    swap1(p1,p2);
    swap2(p1,p2);
    swap11(&p1,&p2);
    swap22(&p1,&p2);
    printf("after swap%d %d",a,b);
    return 0;

}
