
#include <stdio.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void divi(int,int);
void rem(int,int);
void add1(int,int);
void sub1(int,int);
void mul1(int,int);
void divi1(int,int);
void rem1(int,int);
int main()
{
    int a=25,b=5;
    void (*f[10])(int,int)={add,sub,mul,divi,rem,add1,sub1,mul1,divi,rem1};
    f[0](a,b);
    f[1](a,b);
    f[2](a,b);
    f[3](a,b);
    f[4](a,b);
    f[5](a,b);
    f[6](a,b);
    f[7](a,b);
    f[8](a,b);
    f[9](a,b);
    return 0;
}
void sub(int a,int b)
{
    printf("sub=%d\n",a-b);
    return;
}
void mul(int a,int b)
{
    printf("mul=%d\n",a*b);
    return;
}
void divi(int a,int b)
{
    printf("divi=%d\n",a/b);
    return;
}
void rem(int a,int b)
{
    printf("rem=%d\n",a/b);
    return;
}
void add1(int a,int b)
{
    printf("add1=%d\n",a+b);
    return;
}
void sub1(int a,int b)
{
    printf("sub1=%d\n",a-b);
    return;
}
void mul1(int a,int b)
{
    printf("mul1=%d\n",a*b);
    return;
}
void divi1(int a,int b)
{
    printf("divi1=%d\n",a/b);
    return;
}
void rem1(int a,int b)
{
    printf("rem1=%d\n",a%b);
    return;
}
void fun(int a,int b)
{
    printf("add=%d\n",a+b);
    return;
}
