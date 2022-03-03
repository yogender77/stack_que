#include<stdio.h>
void strcopy(char d[],char s[]);
void strcopycopy(char *ptr,char *ptr1);
int main()
{
    char d[20];
    char s[20];
    printf("enter first string");
    scanf("%s",d);
    printf("enter second striing");
    scanf("%s",s);
    strcopy(d,s);
    strcopycopy(d,s);
}
void strcopycopy(char *ptr,char *ptr1)
{
    int i=0;
    while(*(ptr1+i)!='\0')
    {
        *(ptr+i)=*(ptr1+i);
         i++;
    }
    *(ptr+i)='\0';
    printf("%s",ptr[i]);
}
void strcopy(char d[],char s[])
{
    int i=0;
    while(s[i]!='\0')
    {
        d[i]=s[i];
         i++;
    }
    d[i]='\0';
    printf("%s",d);
}
