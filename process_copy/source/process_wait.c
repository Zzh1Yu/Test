#include"../include/process_copy.h"

int  process_wait(void){
	while(1){
	int i =wait(NULL);
	if(i==-1){
	return 0;
}
	};
	return 0;
}
