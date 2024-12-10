/*************************************************************************
	> File Name: 1.errno_test.c
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 09 Dec 2024 04:30:21 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<errno.h>

int main(){
    const char *msg = "Hello,errno!\n";
    printf("Before system call errno is %d\n", errno);
    ssize_t wsize = write(1, msg, strlen(msg));
    if(wsize < 0) {
        printf("After system call errno is %d\n", errno);
        perror("write");
    }
    wsize = write(3, msg, strlen(msg));
    if(wsize < 0) {
        printf("After system call errno is %d\n", errno);
        perror("write");
        fprintf(stderr, "write : %s\n", strerror(errno));
    }

    return 0;
}
