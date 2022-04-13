#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
pid_t p;
p=fork();
if(p==0)                                   //child
{
 	sleep(10);
printf("I am child having PID %d\n",getpid());
printf("My parent PID is %d\n",getppid());
}
else                                          //parent
{
	sleep(2);
printf("I am Parent PID %d\n",getpid());
printf("MY child PID is %d\n",p);
}
}
