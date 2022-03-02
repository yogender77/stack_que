#include <stdio.h>
int fibanocci(int* );
int main()
{
    int n;
    printf("enter number of terms:");
    scanf("%d",&n);
    fibanocci(&n);
    return 0;
}
int fibanocci(int *ptr)
{
    int x=0,y=1,z,i;
    for(i=0;i<*ptr;i++)
    {
    z=x+y;
    printf("%d\t",z);
    x=y;
    y=z;
    }
}
