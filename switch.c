int main()
{
    int a,b;
    char ch;
    printf("enter two integers :");
    scanf("%d%d\n",&a,&b);
    printf("enter sum or sub:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        printf("sum is %d",a+b);
        break;
        case 's':
        printf("diff is %d",a-b);
        break;
        default:printf("no action");
    }

    return 0;
}
