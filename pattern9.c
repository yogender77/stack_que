/*
1
12
123
1234
12345
1234
123
12
1
*/
#include <stdio.h>

int main()
{
    int i,j,n=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
