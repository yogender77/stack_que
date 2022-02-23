#include<stdio.h>
#include<stdlib.h>
struct student
{
int roll_no;
char name[20];
float marks;
}st;
void main()
{
struct student *ptr;
printf("\n \t Enter the record");
printf("\n Enter the Roll Number");
scanf("%d",&st.roll_no);

printf("\n Enter the Name");
scanf("%s",st.name);

printf("\n Enter the Marks");
scanf("%f",&st.marks);
ptr=&st;
printf("\n display the details using structure variables");

printf( "%d %s %f", st.roll_no, st.name, st.marks);

printf("\n display the details using pointer variables");
printf( "%d %s %f",ptr->roll_no,         ptr->name, ptr->marks);
}

void print_rec(int r,char n[ ],float m)
{
printf("\n You have Entered Following record");
printf("\n %d %s %f",r,n,m);
}
