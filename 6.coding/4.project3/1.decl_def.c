/*************************************************************************
	> File Name: 4.decl_def.c
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 14 Oct 2024 06:08:36 PM CST
 ************************************************************************/

#include<stdio.h>

int add(int, int);

extern int c,d ;

int main(){
    int a = 1, b = 2;
    printf("a + b + c + d = %d\n", a + b + c + d);

    return 0;
}

int add(int a, int b){
    return a + b;
}
