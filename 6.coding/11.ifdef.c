/*************************************************************************
	> File Name: 11.ifdef.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 15 Oct 2024 07:06:19 PM CST
 ************************************************************************/

#include<stdio.h>

//#define DEBUG

#ifdef DEBUG
int a = 1;
#else
int a = 2;
#endif

int main(){
    printf("a = %d\n", a);

    return 0;
}
