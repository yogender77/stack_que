#include <stdio.h>
#define SIZE 10
int compare(const char* ,const char*);//declaration of function
int main()
{
    int k;
    char str[SIZE]="yogender";
    char str1[SIZE]="yogender";
    int (*fp)(const char* ,const char* );//declaration of function pointer
    fp=compare;
    k=fp(str,str1);
    if(k==0)
    {
        printf("both strings are same");
    }
    else
    {
        printf("strings are not equal");
        
    }
    printf("%d",k);
    return 0;
}
int compare(const char *pstr,const char *pstr1)
{
    int i;
    while(*pstr!='\0' & *pstr1!='\0')
    {
        if(*pstr!=*pstr1)
        {
            break;
        }
        pstr++;
        pstr1++;
    }
    return *pstr-*pstr1;
}
