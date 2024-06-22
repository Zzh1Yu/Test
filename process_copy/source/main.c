#include"../include/process_copy.h"

int main(int argc,char**argv){
	//./process_copy 1.png 2.png
	int pronum;
	int blocksize;
	if(argv[3]==0){
		pronum=5;}
	else{
		pronum=atoi(argv[3]);
		}
	if(check_pram(argc,argv[1],pronum)==-1){
	printf("check_pram error\n");
	return 0;
	}
	blocksize = blocksize_cur(argv[1],pronum);
	printf("blocksize =%d\n",blocksize);

	if(process_create(argv[1],argv[2],pronum,blocksize)==-1){
		printf("process_create error\n");
		return 0;
	}else{
		printf("creat/kill process success\n");
	}

	return 0;
}
