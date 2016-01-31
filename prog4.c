#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
void main()
{
   int pid,childpid;
  printf("i am a process with pid %d\n",(int) getpid());
  pid=fork();
  if(pid<0)
{
   perror("fork failed\n");
}
 if(childpid==0)
{
    printf("i'm the child process with pid %d\n",(int) getpid());
    exit(0);
}
//now you can confirm that the next is parent //
   printf("i'm the parent process with pid %d\n",(int) getpid());
}
