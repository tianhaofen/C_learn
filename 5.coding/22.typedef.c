/*************************************************************************
	> File Name: 22.typedef.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 08 Oct 2024 08:04:42 PM CST
 ************************************************************************/

#include<stdio.h>

typedef long long LL;
typedef int (*Arr2Dim10)[10];
typedef void (*Func)();

void test(){
    printf("hello function pointer\n");
    return;
}

int main(){
    LL a;
    printf("sizeof(a) = %lu\n", sizeof(a));
    int arr[5][10];
    Arr2Dim10 p = arr;
    Func p2 = test;
    p2();
    return 0;
}
