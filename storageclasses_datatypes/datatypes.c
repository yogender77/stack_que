#include<stdio.h>
int main()
{
        int a=50,b=65;
        a++;
        b++;
        printf("%d\t%d\t%d\t%d\t%d\t%d",a,b,a*b,a-b,a<<2,b>>3);
        char ch='a';
        ch++;
        printf("%c",ch);
        float c=1.22;
        c++;
        printf("\n%f\n",c);//we canot perform bit wise operation on float
        printf("%ld\n%ld\n%ld\n",sizeof(int),sizeof(float),sizeof(double));

}

