#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void main()
{
  int childpid;
  int count1=0,count2=0;
  printf("before it forks!!\n");
  childpid = fork();
  if(childpid==0)
  {
     printf("this is a child process with pid %d\n",(int) getpid());
     while(count1 <10)
     {
       printf("child process: %d\n",count1);
       sleep(1);
       count1++;
     }
}
else
{  
    printf("this is a parent process with pid %d\n",(int) getpid());
    while(count2<20)
    {
      printf("parent process: %d\n",count2);
      sleep(1);
      count2++;
    }
  }
}
