#include<stdio.h>
void main()
{
int n=10;
int *ptr;
ptr=&n;
printf("Value of n is %d",n);
printf("\nAddress of n is %p",&n);
printf("\nAddres of pointer is %p",ptr);
printf("\nvalue stored in pointer is %d",*ptr);
}
