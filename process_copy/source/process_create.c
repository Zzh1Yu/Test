#include"../include/process_copy.h"

int process_create(const char*src,const char*dest,int pronum,int blocksize){
	pid_t pid;
	for(int i =0;i<pronum;i++)
	{
	pid=fork();
	if(pid==0){
	int pos = i* blocksize;
	char str_pos[10];
	sprintf(str_pos,"%d",pos);
	char str_blocksize[10];
	sprintf(str_blocksize,"%d",blocksize);
	printf("pos success , str_blocksize success! going to execl...\n");
	execl("/home/colin/20230912/process/process_copy/copy","copy",src,dest,str_pos,str_blocksize,NULL);
	}
}
	if(pid>0)
	{
	printf("parent killing child\n");
  int num =	process_wait();
  if(num==0){
	printf("kill all child success\n");
  }
	}else if(pid==0){
	}else{
	perror("fork error;");
	}
return 0;
}
