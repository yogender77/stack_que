
#include <stdio.h>
void stringfre(char str1[],char ch);
void stringfrefre(char *ptr,char ch);
int main()
{
    char str1[20]="yogender";
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    stringfre(str1,ch);
    stringfrefre(str1,ch);
    return 0;
}
void stringfrefre(char str1[],char ch)
{
    
    int i=0,n=0;
    while(str1[i]!='\0')
    {
        if(str1[i]==ch)
        {
            n++;
        }
        i++;
    }
    printf("%d",n);
    
}
void stringfre(char *ptr,char ch)
{
    int i=0,n=0;
    while(*(ptr+i)!='\0')
    {
        if(*(ptr+i)==ch)
        {
            n++;
        }
        i++;
    }
    printf("%d",n);
}
