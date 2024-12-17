/*************************************************************************
	> File Name: 6.my_cp.c
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 13 Dec 2024 08:07:19 PM CST
 ************************************************************************/

#include "./commom/head.h"

void copy_file(const char *src, const char *dest, int copy_flag) {
    int src_fd, dest_fd;
    if ((src_fd = open(src, O_RDONLY)) < 0) {
        perror("open src");
        exit(1);
    }
    if ((dest_fd = open(dest, O_RDWR | O_CREAT, 0644)) < 0) {
        perror("open dest");
        exit(1);
    }
    const size_t BUFFSIZE = 5;
    char buff[BUFFSIZE + 1];
    ssize_t rsize = 0;
    //memset(buff, 0, BUFFSIZE + 1);

    while ((rsize = read(src_fd, buff, BUFFSIZE)) > 0) {
        write(dest_fd, buff, rsize);
    }

    if (copy_flag) {
        struct stat src_stat;
        if (fstat(src_fd, &src_stat) < 0) {
            perror("fstat");
        }
        else{
            if (fchmod(dest_fd, src_stat.st_mode) < 0) {
                perror("fchmod");
            }
            struct utimbuf new_time;
            new_time.actime = src_stat.st_atime;
            new_time.modtime = src_stat.st_mtime;
            if (utime(dest, &new_time)) {
                perror("utime");
            }
        }
    }

    close(src_fd);
    close(dest_fd);

    return ;
}

int main(int argc, char **argv) {
    int opt, copy_flag = 0;

    while((opt = getopt(argc, argv, "a")) != -1){
        switch(opt) {
            case 'a':
                copy_flag = 1;
                break;
            default:
                fprintf(stderr, "Usage : %s [-a] <src_file> <dent_file>\n", argv[0]);
                exit(1);
        }
    }

    if (argc - optind != 2) {
        fprintf(stderr, "Usage : %s [-a] <source_file> <destination_file>\n", argv[0]);
        exit(1);
    }

    const char *src = argv[optind];
    const char *dest = argv[optind + 1];

    copy_file(src, dest, copy_flag);
    printf("%s %s", argv[1], argv[2]);


    return 0;
}

