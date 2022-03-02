
#include <stdio.h>
int palindrome(int );
int main()
{
    int num;
    printf("enter number :");
    scanf("%d",&num);
    palindrome(num);
    return 0;
}
int palindrome(int num)
{
    int rev=0,rem,temp=num;
    while(num>0)
    {
        rev=rev*10;
        rev=rev+num%10;
        num=num/10;
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
