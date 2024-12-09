/*************************************************************************
	> File Name: 3.fprintf.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 24 Oct 2024 03:53:18 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    fprintf(stdout, "hello world\n");
    int n;
    fscanf(stdin, "%d", &n);
    fprintf(stderr, "n = %d\n", n);

    return 0;
}
