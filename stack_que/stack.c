



 #include<stdio.h>
#define s 5  
int stack[s];
int tos=-1;
void push(int ele)
{

	if(tos==s-1)
	{
		printf("stck is full\n");
		return;
	}
	else
	{
	tos++;    
	stack[tos]=ele;
	}
}
void pop()
{
	if(tos==-1)
	{	
		printf("stack is empty\n");
		return;
	}
	else
	{
	printf("poped ele %d\n",stack[tos]);
	tos--;
	}
}
void display()
{
	if(tos== -1)
	{
		printf("stack is empty\n");
		return;
	}
	int i;
	for(i=0;i<=tos;i++)
	printf("%d\n",stack[i]);
}
int main()
{
	push(1);
	push(2);
	push(3);
	display();
	pop();
	display();
}

