
#include <stdio.h>
int value(int ,int );
int main()
{
    
    int a=5,b=8;
    printf("before calling the functions, a and b %d %d\n",a,b);
    value(a,b);
    printf("after calling function a and b %d %d\n",a,b);
    return 0;
}
int value(int x, int y)
{
    x++;
    y++;
    printf("function changes are %d %d\n",x,y);
}
