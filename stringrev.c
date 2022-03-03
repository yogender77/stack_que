
#include<stdio.h>
void astrreverse(char str[]);
int main()
{
    char str[20];
    printf("enter string:");
    scanf("%s",str);
    astrreverse(str);
}
void astrreverse(char str[])
{
    int i=0,p,j,temp;
    while(str[i]!='\0')
    {
        i++;
    }
    printf("%d\n",i);
    for(j=i-1,i=0;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("%s",str);

}
