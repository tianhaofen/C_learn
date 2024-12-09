/*************************************************************************
	> File Name: test3.c
	> Author:YYF 
	> Mail: 
	> Created Time: Sat 12 Oct 2024 05:28:22 PM CST
 ************************************************************************/

#include<stdio.h>

int add(int, int);

int main(){
    int a = 123, b = 456;
    printf("a + b = %d\n", a + b);
    printf("add(%d, %d) = %d\n", a, b, add(a, b));
}
