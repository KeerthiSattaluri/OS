#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
void main()
{
 printf("we are in p1(A) process\n");
 printf("the process id is %d\n",getpid());
 int a;
 a=fork();
 if(a==0)
 {
   printf("we are in p2(b) process\n");
   printf("the process id is %d\n",getpid());
   printf("the parent process id is %d\n",getppid());
   int b;
    b=fork();
    if(b==0)
    {
    printf("we are in p4(d) process\n");
   printf("the process id is %d\n",getpid());
   printf("the parent process id is %d\n",getppid());
    }
 }
 else
   {
    int c;
    c=fork();
    if(c==0)
    {
     printf("we are in p3(c) process\n");
   printf("the process id is %d\n",getpid());
   printf("the parent process id is %d\n",getppid());
    int d;
    d=fork();
    if(d==0)
    {
    printf("we are in p5(e) process\n");
   printf("the process id is %d\n",getpid());
   printf("the parent process id is %d\n",getppid());
   }
    else
    {
      printf("we are in p6(f) process\n");
   printf("the process id is %d\n",getpid());
   printf("the parent process id is %d\n",getppid());
    }
  }
  }
}

