#include<stdio.h>
int main()
{
        char a,s,ch;
        printf("enter choice 1)addition=a 2)subtraction=s\n");
        scanf("%c",&ch);
        int x,y,c,d;
        switch(ch)
        {
                case 'a':
                        printf("enter two integers");
                        scanf("%d%d",&x,&y);
                        printf("the sum is=%d",x+y);
                        break;
                case 's':
                        printf("enter two integers");
                        scanf("%d%d",&c,&d);
                        printf("sub=%d",c-d);
                        break;
                default:printf("no action required");
        }
}

