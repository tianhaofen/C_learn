/*************************************************************************
	> File Name: my_errno.h
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 09 Dec 2024 07:58:07 PM CST
 ************************************************************************/

#ifndef _MY_ERRNO_H
#define _MY_ERRNO_H

#define MY_SUCCESS 0
#define MY_NO_ACCESS 1
#define MY_HEART_LOCKED 2

extern int my_errno;

const char* my_strerror(int my_errno);
void my_perror(const char *prefix);
int open_heart(const char *name);

#endif
