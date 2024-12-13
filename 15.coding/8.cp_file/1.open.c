/*************************************************************************
	> File Name: 1.open.c
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 13 Dec 2024 04:35:30 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>

int main() {
    int fd;
    close(0);
    fd = open("../7.list_file/1.list_file.c", O_RDONLY);
    if (fd < 0) {
        perror("open");
        exit(1);
    }
    printf("fd = %d\n", fd);
    close(fd);
    close(fd);
    perror("close");

    return 0;
}
