#include<stdio.h>
int stringlenght(char str[]);
int main()
{
    char str[30];
    printf("enter a string:");
    scanf("%s",str);
    stringlenght(str);
}
int stringlenght(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    printf("string lenght is:%d",i);
}
