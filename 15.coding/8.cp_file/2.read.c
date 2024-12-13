/*************************************************************************
	> File Name: 2.read.c
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 13 Dec 2024 06:15:02 PM CST
 ************************************************************************/

#include "./commom/head.h"

int main() {
    int fd;
    if ((fd = open("./x.c", O_RDWR | O_CREAT, 0644)) < 0){
        perror("open");
        exit(1);
    }
    char buff[10] = {0};
    int buff_size = sizeof(buff);
    while(1){
        memset(buff, 0, buff_size);
        ssize_t rsize = read(fd, buff, buff_size - 1);
        if (rsize < 0) {
            perror("read");
            exit(1);
        }
        else if (rsize == 0) {
            break;
        }
        else {
            printf("%s", buff);
        }
    }

    return 0;
}
