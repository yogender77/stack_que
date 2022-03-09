
#include <stdio.h>
int fun(int*);
int fun1(int*);
int fun2(int*);
int fun3(int*);
int fun4(int*);
int main()
{
    int p=25;
    int *b=&p;
    int (*a[10])(int *b)={fun,fun1,fun2,fun3,fun4};
    printf("%d\n",a[0](b));
    printf("%d\n",a[1](b));
    printf("%d\n",a[2](b));
    printf("%d\n",a[3](b));
    printf("%d\n",a[4](b));
    return 0;
}
int fun(int *b)
{
    return *b;
}
int fun1(int *b)
{
    return *b;
}
int fun2(int *b)
{
    return *b;
}
int fun3(int *b)
{
    return *b;
}
int fun4(int *b)
{
    return *b;
}
