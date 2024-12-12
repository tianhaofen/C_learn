/*************************************************************************
	> File Name: 1.list_file.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 11 Dec 2024 08:56:00 PM CST
 ************************************************************************/

#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>

int main(int argc, char **argv){
    char *path = argc > 1 ? argv[1] : ".";
    struct dirent *entry;
    DIR *dir = opendir(path);
    if (dir == NULL) {
        perror("opendir");
        exit(1);
    }
    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_name[0] != '.'){
            printf("(%ld)%s ", entry->d_ino, entry->d_name);
            switch (entry->d_type) {
                case DT_REG:
                    printf("-");
                    break;
                case DT_DIR:
                    printf("d");
                    break;
                case DT_CHR:
                    printf("c");
                    break;
                case DT_BLK:
                    printf("b");
                    break;
                case DT_FIFO:
                    printf("P");
                    break;
                case DT_LNK:
                    printf("l");
                    break;
                case DT_SOCK:
                    printf("s");
                    break;
                case DT_UNKNOWN:
                    printf("?");
                    break;
            }
            printf("\n");
        }
    }

    return 0;
}
