    
#include <stdio.h>
int fibanocci(int n);
int main()
{
    int n;
    printf("enter number of terms:");
    scanf("%d",&n);
    fibanocci(n);
    return 0;
}
int fibanocci(int n)
{
    int x=0,y=1,z,i;
    for(i=0;i<n;i++)
    {
    z=x+y;
    printf("%d\t",z);
    x=y;
    y=z;
    }
}
