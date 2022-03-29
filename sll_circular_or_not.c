
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *start=NULL;
void display();
void create_linked_list(int m);
void sll_circular_or_not();
int main()
{
    int n,i,m;
    printf("enter how many nodes want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter data :");
        scanf("%d",&m);
        create_linked_list(m);
    }
    display();
    sll_circular_or_not();
    return 0;
}
void sll_circular_or_not()
{
    struct node *temp;
    temp=start;
    while(temp!=0)
    {
        if(temp->link==NULL)
        {
            printf("not a circular linked list");
        }
        temp=temp->link;
    }
}
void display()
{
    struct node *curr;
    if(start==NULL)
    {
        printf("list is empty");
        return;
    }
    curr=start;
    while(curr!=NULL)
    {
        printf("%d\n",curr->data);
        curr=curr->link;
    }
}
void create_linked_list(int m)
{
    struct node *temp,*curr;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=m;
    temp->link=NULL;
    if(start==NULL)
    {
        start=temp;//if list empty
    }
    else
    {
       curr=start;
       while(curr->link!=NULL)
       {
           curr=curr->link;
       }
       curr->link=temp;

    }
}
