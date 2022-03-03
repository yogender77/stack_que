#include <stdio.h>
#include<string.h>
int stringlenght(char arr[]);
int main()
{
    char arr[20]="yogender";
    int len=strlen(arr);
    int i=0,j;
    while(arr[i]!='\0')
    {
        printf("%c\t",arr[i]);
        i++;
    }
    printf("\nstring is%s",arr);
    printf("\nstring lenght=%d",len);
    printf("\naddress of string=%p",&arr);
    stringlenght(arr);
    return 0;
}
void stringlenght(char arr[])
{
    int j=0;
    while(arr[j]!='\0')
    {
        j++;
    }
     printf("\nstring lenght without using strlen=%d",j);
    
}
