#include<stdio.h>
void main()
{
int i=100,*iptr;
float f=122.354,*fptr;
char c='d',*cptr;
iptr=&i;
fptr=&f;
cptr=&c;
printf("The values of the variables");
printf("\n%d",*iptr);
printf("\n%f",*fptr);
printf("\n%c",*cptr);
printf("\nStarting Address");
printf("\n%p",iptr);
printf("\n%p",fptr);
printf("\n%p",cptr);
iptr++;
fptr++;
cptr++;
printf("\nPointer Incrementing");
printf("\n%p",iptr);
printf("\n%p",fptr);
printf("\n%p",cptr);
iptr--;
fptr--;
cptr--;
printf("\nPointer Decrementing");
printf("\n%p",iptr);
printf("\n%p",fptr);
printf("\n%p",cptr);
}
