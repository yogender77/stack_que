#include<stdio.h>
#include<pthread.h>
void* uppercase()
{
        char ch=65;
        while(ch<=92)
        {
                printf("%c",ch);
                ch=ch+1;
        }
        printf("\n");
}
void* lowercase()
{
        char ch=97;
        while(ch<=122)
        {
            printf("%c",ch);
                ch=ch+1;
        }
        printf("\n");
}
void* digits()
{
        int a=0;
        while(a<=10)
        {
                printf("%d",a);
                a++;
        }
        printf("\n");
}
int main()
{
            pthread_t k,l,m;
        pthread_create(&k,NULL,uppercase,NULL);
        pthread_create(&l,NULL,lowercase,NULL);
        pthread_create(&m,NULL,digits,NULL);
        pthread_join(k,NULL);
        pthread_join(l,NULL);
        pthread_join(m,NULL);
}



 
