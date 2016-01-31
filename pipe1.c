#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
void main(){

int inbuf;

int p[2],j;
pid_t pid;
int n;
int x;
int y=0;

printf("enter the value of n");
scanf("%d",&x);
n=x;
if(pipe(p)==-1)
{
	perror("pipe call");
	exit(1);
}
switch(pid=fork())
{
	case -1:
		perror("fork failure");
		exit(2);
	case 0:
		close(p[0]);
		write(p[1],&n,1);
		close(p[1]);
		break;
	default:
		close(p[1]);
		read(p[0],&inbuf,1);
		close(p[0]);
		y=inbuf;
		
		while(--y)
		{
			if(y%2!=0)
			printf("%d\n",y);
		}

		
		wait(NULL);
}
exit(0);






}
