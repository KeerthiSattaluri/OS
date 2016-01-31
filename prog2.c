#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
void main()
{
   int pid;
  printf("i am a process with pid %d\n",(int) getpid());
  pid=fork();
  printf("fork returned %d\n",pid);
  printf("i am a process with pid %d\n",(int) getpid());
}
