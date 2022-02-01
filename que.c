#include<stdio.h>
#define size 5
int que[size];
int first=-1;
int last=-1;
void enq(int num)
{
	if(last==size-1)
	{
		printf("que is full\n");
		return;

	}
	else
	{
	
		if(first==-1)
		{
			first=0;
		}
		last++;
		que[last]=num;
	}


}
void deq()
{
	if(first==-1)
	{
	
		printf("que is empty\n");
	 }
	else
	{
		printf("deleted %d",que[first]);
		first++;
	}


}
void display()
{
 
	if (last==-1)
	{
		printf(" que is empty");
	}
	else
		int i
			for(i=first;i<=last;i++)
			{
				printf("%d",que[i]);
			}
}

}

int main()
{
    enq(1);
    enq(2);
    enq(3);
    display();
    deq();
    display();
}

