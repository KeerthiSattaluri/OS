#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
	char a[10];
	printf("enter the string");
	scanf("%s",a);
	char b[10];
	pid_t pid;
	int p[2];
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
		write(p[1],a,10);
		close(p[1]);
		break;
	default:
		close(p[1]);
		read(p[0],b,10);
		close(p[0]);
		printf("\n");
		int i;		
		for(i=0;i<10;i++)
		{
			if((b[i]>='a')&&(b[i]<='z')){
			b[i]=(char)(b[i]-32);
			printf("%c",b[i]);}
		else
			printf("%c",b[i]);
		}
		
		
		
		wait(NULL);
	}
exit(0);
		

}
