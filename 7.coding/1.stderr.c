/*************************************************************************
	> File Name: 1.stderr.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 24 Oct 2024 03:33:50 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    printf("hello world\n");
    int n;
    scanf("%d", &n);
    perror("out of range\n");

    return 0;
}
