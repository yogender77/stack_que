#include<stdio.h>
#include<pthread.h>
void* thread_handler()
{
        while(1)
        {
                printf("thread is created\n");
        }
}
int main()
{
        pthread_t y;
        pthread_create(&y,NULL,thread_handler,NULL);
        pthread_join(y,NULL);
}

