#include<stdio.h>
int main()
{
    int a,b;
    printf("ennter two variables:");
    scanf("%d%d",&a,&b);
    printf("before shifting%d %d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after shifting%d %d",a,b);
}

