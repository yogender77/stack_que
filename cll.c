
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
void create_circular_list(int m);
void display();
void circular_or_not();
struct node *start=NULL;
struct node *tail=NULL;
int main()
{
    int n,num,i;
    printf("enter number of nodes to want enter:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter data to the node:");
        scanf("%d",&num);
        create_circular_list(num);
    }
    circular_or_not();
    display();
}
void circular_or_not()
{
    struct node *current_node;
    current_node=start;
    if(start==NULL)
    {
        printf("list is empty");
    }
    while(current_node->link!=start)
    {
        current_node=current_node->link;
    }
    if(current_node->link==start)
    {
        printf("list is circular");
    }
    else
    {
        printf("not a circular linked list");
    }
}
void display()
{
    struct node *temp;
    temp=start;
    do
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    } while(temp!=start);
}
void create_circular_list(int m)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=m;
    temp->link=NULL;
    if(start==NULL)
    {
        start=tail=temp;
        temp->link=start;
    }
    else
    {
        tail->link=temp;
        tail=temp;
        tail->link=start;
    }
}
