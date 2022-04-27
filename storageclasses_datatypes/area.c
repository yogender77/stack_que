#include<stdio.h>
#define pi 3.14
int main()
{
        int r,area,cir;
        printf("enter radius of circle");
        scanf("%d",&r);
        area=pi*r*r;
        cir=2*pi*r;
        printf("area of circle is=%d \ncircumstance=%d",area,cir);
}

