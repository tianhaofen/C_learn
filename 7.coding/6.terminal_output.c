/*************************************************************************
	> File Name: 6.terminal_output.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 24 Oct 2024 04:34:24 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    freopen("/dev/pts/1", "w", stdout);
    char s[1000];
    while (scanf("%s", s) != EOF){
        printf("from 0 : %s\n", s);
    }

    return 0;
}
