/*************************************************************************
	> File Name: 1.list_file.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 11 Dec 2024 08:56:00 PM CST
 ************************************************************************/

#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<pwd.h>
#include<grp.h>

const char *uid_to_name(uid_t uid) {
    static char user_name[64];
    struct passwd *pwd = getpwuid(uid);
    if(pwd != NULL) {
        snprintf(user_name, sizeof(user_name), "%s", pwd->pw_name);
    }
    else{
        snprintf(user_name, sizeof(user_name), "Unknown");
    }
    return user_name;
}

const char *gid_to_name(gid_t gid) {
    static char group_name[64];
    struct group *grp = getgrgid(gid);
    if (grp != NULL) {
        snprintf(group_name, sizeof(group_name), "%s", grp->gr_name);
    }
    else{
        snprintf(group_name, sizeof(group_name), "Unknown");        
    }
    return group_name;
}

const char * mode_to_str(mode_t mode) {
    static char str[11];
    switch(mode & S_IFMT) {
        case S_IFREG:
            str[0] = '-';
            break;
        case S_IFDIR:
            str[0] = 'd';
            break;
        case S_IFCHR:
            str[0] = 'c';
            break;
        case S_IFBLK:
            str[0] = 'b';
            break;
        case S_IFIFO:
            str[0] = 'p';
            break;
        case S_IFSOCK:
            str[0] = 's';
            break;
        case S_IFLNK:
            str[0] = 'l';
            break;
        default:
            str[0] = '?';
            break;
    }
    str[1] = (mode & S_IRUSR) ? 'r' : '-';
    str[2] = (mode & S_IWUSR) ? 'w' : '-';
    str[3] = (mode & S_IXUSR) ? 'x' : '-';
    str[4] = (mode & S_IRGRP) ? 'r' : '-';
    str[5] = (mode & S_IWGRP) ? 'x' : '-';
    str[6] = (mode & S_IXGRP) ? 'w' : '-';
    str[7] = (mode & S_IROTH) ? 'r' : '-';
    str[8] = (mode & S_IWOTH) ? 'w' : '-';
    str[9] = (mode & S_IXOTH) ? 'x' : '-';

    str[10] = '\0';

    return str;
}

int main(int argc, char **argv){
    char *path = argc > 1 ? argv[1] : ".";
    struct dirent *entry;
    DIR *dir = opendir(path);
    struct stat file_stat;
    if (dir == NULL) {
        perror("opendir");
        exit(1);
    }
    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_name[0] != '.'){
            char full_path[1024] = {0};
            char mode_str[11];
            snprintf(full_path, sizeof(full_path), "%s/%s", path, entry->d_name);

            if (stat(full_path, &file_stat) == -1) {
                perror("stat");
                continue;
            }
            printf("%s, lnknum: %ld, %s, %s, date: %ld\n", mode_to_str(file_stat.st_mode), file_stat.st_nlink, uid_to_name(file_stat.st_uid), gid_to_name(file_stat.st_gid), file_stat.st_atime);
        }
    }

    return 0;
}
