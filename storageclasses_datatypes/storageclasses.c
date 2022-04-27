#include<stdio.h>
void automatic();
void static_storage();
static int x=101;
int main()
{
        automatic();
        automatic();
        automatic();
        static_storage();
        static_storage();
        static_storage();
}
void static_storage()
{
        static int a=5,b=10;
        a++;
        b++;
        printf("%d\t%d\n",a,b);
        printf("%d",x);
}
static int y=100;
void automatic()
{
     auto int a=5,b=10;
     a++;
     b++;
     printf("%d\t%d\n",a,b);
     printf("%d\t%d\n",x,y);
}

