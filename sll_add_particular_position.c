
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *start=NULL;
void display();
void create_linked_list(int m);
void add_at_particular_position();
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
    add_at_particular_position();
    display();
    return 0;
}
void add_at_particular_position()
{
    struct node *temp;
    int i=1,n;
    printf("enter which positin want to add:");
    scanf("%d",&n);
         temp=start;
        while(i<n)
        {
            temp=temp->link;
            if(temp==NULL)
            {
                printf("there are less nodes ");
            }
            i++;
        }
        struct node *new_node;
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->link=temp->link;
        new_node->data=45;
        temp->link=new_node;
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
