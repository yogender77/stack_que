#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
 struct node *start=NULL;
void create_linked_list(int m);
void display();
void reverse_linked_list(int n);
void add_end();
void delete_at_particular_position();
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
        reverse_linked_list(n);
        printf("reversed linked list is\n");
         display();
         reverse_linked_list(n);
         add_end();
         printf("added at end\n");
         display();
         delete_at_particular_position();
         printf("after delete\n");
         display();
        
}
void delete_at_particular_position()
{
    struct node *temp;
    int i=1,p;
    printf("enter which node want to delete:");
    scanf("%d",&p);
    temp=start;
    if(start==NULL)
    {
        printf("list is empty");
    }
    while(i<p-1)
    {
        temp=temp->link;
        i++;
    }
    temp->link=temp->link->link;
}
void add_end()
{
    struct node *temp,*p;
    temp=(struct node*)malloc(sizeof(struct node));
    p=start;
    if(start==NULL)
    {
        temp=start;
    }
    else
    {
     while(p->link!=NULL)
     {
         p=p->link;
     }
     temp->data=60;
     p->link=temp;
     temp->link=NULL;
    }
    
}
void reverse_linked_list(int n)
{
    struct node *p,*q;
    int i=0,j,temp;
    j=n-1;
    p=q=start;
    if(start==NULL)
    {
        printf("list is empty");
    }
    else
    {
    while(i<j)
    {
        int k=0;
        while(k<j)
        {
            q=q->link;
            k++;
        }
        temp=p->data;
        p->data=q->data;
        q->data=temp;
        i++;
        j--;
        p=p->link;
        q=start;
        
    }
    }
}
void display()
{
    struct node *q;
    if(start==NULL)
    {
        printf("list is empty");
        return;
    }
    q=start;
    while(q!=NULL)
    {
        printf("%d\n",q->data);
        q=q->link;
    }
}
void create_linked_list(int m)
{
    struct node *temp,*q;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=m;
    temp->link=NULL;
    if(start==NULL)
    {
        start=temp;//if list empty
    }
    else
    {
       q=start;
       while(q->link!=NULL)
       {
           q=q->link;
       }
       q->link=temp;
        
    }
}
