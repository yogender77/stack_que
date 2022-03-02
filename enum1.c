#include <stdio.h>
void rectangle(int ,int );
void rectangleref(int* ,int* );
void swap1(int ,int );
void swap11(int*,int*);
void swap2(int ,int);
void swap22(int*,int*);
enum check{mon,tue,wed,thu,fri,sat,sun};
int main()
{
    enum check s;
    int a,b,n;
    printf("enter n avlue\n 0:call by value rectangle\n 1:call by reference rectangle\n 2:swap call by value with temp\n 3:swap call by refence with temp\n 4:swap call by value without temp\n 5:swap call by refernce without temp ");
    scanf("%d",&n);
    switch(n)
    {
        case mon:
                 printf("enter lenght and width:");
                  scanf("%d%d",&a,&b);
                 rectangle(a,b);
        break;
        case tue:
                printf("enter lenght aand width:");
                scanf("%d%d",&a,&b);
                rectangleref(&a,&b);
                break;
                case wed:
                printf("enter values:");
                scanf("%d%d",&a,&b);
                swap1(a,b);
                break;
            case thu:
                printf("enter values:");
                scanf("%d%d",&a,&b);
                swap11(&a,&b);
                break;
               case fri:
                printf("enter values:");
                scanf("%d%d",&a,&b);
                swap2(a,b);
                break;
                case sat:
                printf("enter values:");
                scanf("%d%d",&a,&b);
                swap22(&a,&b);
                break;
    }
    return 0;
}
void swap22(int *p1,int *p2)
{
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("%d %d",*p1,*p2);
}

void swap2(int p1,int p2)
{
    p1=p1+p2;
    p2=p1-p2;
    p1=p1-p2;
    printf("%d %d",p1,p2);
}
void swap11(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("%d %d",*p1,*p2);
}

void swap1(int p1,int p2)
{
    int temp;
    temp=p1;
    p1=p2;
    p2=temp;
    printf("%d %d",p1,p2);
}

void rectangleref(int *p1,int *p2)
{
    int c=*p1 * *p2;
    printf("%d",c);
}
void rectangle(int a,int b)
{
    int c=a*b;
    printf("%d",c);
}
