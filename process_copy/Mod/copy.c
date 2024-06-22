#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void main(int argc,char**argv)
{
	
	int blocksize = atoi(argv[4]);
	printf("blocksize =%d\n",blocksize);
	int pos = atoi(argv[3]);
	printf("pos = %d\n",pos);
	printf("copy pos and blocksize success!\n");
	int fd = open(argv[1],O_RDWR);                                                                    		lseek(fd,pos,SEEK_SET);    
    printf("open src success!\n");
	char buffer[blocksize];
	int len = read(fd,buffer,sizeof(buffer));
	printf("read src success!\n");
	int fd1 = open(argv[2],O_RDWR|O_CREAT,0664);
	printf("create/open des success!\n");
	lseek(fd1,pos,SEEK_SET);
    int num =write(fd1,buffer,sizeof(buffer));
	printf("write to des success!,num =%d\n",num);
	exit(0);
}
