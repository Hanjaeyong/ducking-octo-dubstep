#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main(void)
{
	int fd;

	fd = open("/dev/sk",O_RDWR);
	printf("fd = %d\n",fd);

	if(fd<0){
		perror("/dev/sk error");
		exit(-1);
	}
	else
		printf("SK has been detected...\n");
	getchar();
	close(fd);

	return 0;
}
