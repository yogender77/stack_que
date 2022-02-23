#include <stdio.h>

int main()
{
    int a=5;
   int *p;
    p=&a;
    printf("value of p= adrees of a =%p\n",p);
    printf("value of p=%p\n",++p);
    printf("value of p=%p\n",p++);
    printf("value of p=%p\n",--p);
    printf("value of p=%p\n",p--);
    printf("value of p=%p\n",p);

    return 0;
}
