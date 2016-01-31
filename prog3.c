#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
void main()
{
   int pid;
  printf("i am a process with pid %d\n",(int) getpid());
  pid=fork();
  if(pid<0)
{
   perror("fork failed\n");
}
 if(pid==0)
{
    printf("i'm the child process with pid %d\n",(int) getpid());
}
else if(pid>0)
{
  printf("i'm the parent process with %d\n",(int)getpid());
}
}
