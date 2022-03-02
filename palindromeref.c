#include <stdio.h>
int palindrome(int* );
int main()
{
    int num;
    printf("enter number :");
    scanf("%d",&num);
    palindrome(&num);
    return 0;
}
int palindrome(int *ptr)
{
    int rev=0,rem,temp=*ptr;
    while(*ptr>0)
    {
        rev=rev*10;
        rev=rev+*ptr%10;
        *ptr=*ptr/10;
    }
    if(rev==temp)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}
