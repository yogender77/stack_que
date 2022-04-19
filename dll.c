#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev,*next;
};
void doubly_linked_list(int m);
void display();
struct node *start=NULL;
struct node *tail=NULL;
int main()
{
    int i,n,num;
    printf("enter number of nodes want to enter:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter data into node:");
        scanf("%d",&num);
        doubly_linked_list(num);
    }
    display();
    
}
void display()
{
    struct node *current;
    current=start;
    while(current!=NULL)
    {
        printf("%d\t",current->data);
        current=current->next;
    }
}
void doubly_linked_list(int m)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=m;
    temp->prev=NULL;
    temp->next=NULL;
    if(start==NULL)
    {
        start=tail=temp;
        temp->prev=NULL;
        temp->next=NULL;
    }
    else
    {
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
        tail->next=NULL;
        
    }
    
}
