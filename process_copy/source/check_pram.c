#include"../include/process_copy.h"

int check_pram(int argc,const char* src,int pronum){
	if(argc<2&&argc>=4){
	printf("pram error\n");
	return -1;
	}
	if(access(src,F_OK)!=0){
	printf("file not exist\n");
	return -1;
	}
	if(pronum<0&&pronum>100){
	printf("pronum error\n");
	return -1;
	}
	return 0;
}
