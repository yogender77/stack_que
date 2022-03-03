
#include <stdio.h>

int main()
{
    char arr[10]={'a','b','c','d','E','f','g','h','i','A'};
    int i;
    for(i=0;i<10;i++)
    {
        if(arr[i]=='a' | arr[i]=='e' | arr[i]=='i' | arr[i]=='o' | arr[i]=='u' | arr[i]=='A' | arr[i]=='E' | arr[i]=='I' | arr[i]=='O' | arr[i]=='U' )
        {
            printf("%c\n",arr[i]);
            printf("position=%d\n",i);
            printf("address=%p\n",&arr[i]);
        }
    }
        
    return 0;
}
