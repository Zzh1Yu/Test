#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/wait.h>
#include<fcntl.h>

int check_pram(int argc,const char * src, int pronum);
int blocksize_cur(const char * src ,int pronum);
int process_wait(void);
int process_create(const char * src,const char*dest , int pronum , int blocksize);
