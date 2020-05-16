#include "stdio.h"

int main(int argc, char* argv[]) {
	char *sAddTitle=NULL;
	if(argc>1)
{
		sAddTitle=argv[1];
fprintf(stderr,"Hello, %s",sAddTitle);
}
else
	fprintf(stderr,"Hello, %s",argv[0]);
    //printf("Hello, world! Writing in MinGW");
	
    return 0;
}