#include<stdio.h>
void main()
{
int r;
float a,*b;
printf("\n Enter the radius of the circle");
scanf("%d",&r);
a=3.14*r*r;
b=&a;
printf("\n The value of a=%f",a);
printf("\n The value of a=%p",&a);
printf("\n The value of b=%p",b);
printf("\n The value of a=%f",*b);
}
