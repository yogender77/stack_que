/*dynamic memory allocation malloc*/
#include <stdio.h>
#include<stdlib.h>
struct emp{
    int id;
    char name[20];
    float sal;
};

int main()
{
    struct emp *ptr;
    ptr=(struct emp *)malloc(sizeof(struct emp));
    if(ptr==NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        printf("enter emp information:");
        scanf("%d %s %f",&ptr->id,ptr->name,&ptr->sal);
    }
    printf("emp id:%d emp name:%s emp sal:%f",ptr->id,ptr->name,ptr->sal);
    

    return 0;
}
