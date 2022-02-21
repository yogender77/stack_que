#include <stdio.h>
void largest(char str[],char str1[]);

int main()
{
    char str[20];
    char str1[20];
    printf("enter a string:");
    scanf("%s",str);
    printf("enter second string");
    scanf("%s",str1);
    largest(str,str1);
    return 0;
}
void largest(char str[],char str1[])
{
    int i=0,j=0;
    while(str[i]!='\0')
    {
        i++;
    }
    while(str1[j]!='\0')
    {
        j++;
    }
    if(i>j)
    {
        printf("string1 is largest:");
    }
    else if(i==j)
    {
        printf("both strings are same lenght");
    }
    else
    {
        printf("string2 is large");
    }
    
}
