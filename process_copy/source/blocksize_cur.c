#include"../include/process_copy.h"

int blocksize_cur(const char* src ,int pronum){
	int fd = open(src,O_RDWR);
	int fsize = lseek(fd,0,SEEK_END);
	int blocksize = (fsize/pronum)+1;
	return blocksize;
}
