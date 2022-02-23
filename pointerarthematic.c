#include <stdio.h>

int main()
{
    int a=5,*pi=&a;
    char b='x',*pc=&b;
    float c=5.5,*pf=&c;
    printf("value of pi= address of a=%p\n",pi);
    printf("value of pc= address of a=%p\n",pc);
    printf("value of pf= address of a=%p\n",pf);
    pi++;
    pc++;
    pf++;
    printf("value of pi= address of a=%p\n",pi);
    printf("value of pi= address of a=%p\n",pc);
    printf("value of pi= address of a=%p\n",pf);

    return 0;
}

