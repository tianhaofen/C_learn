/*************************************************************************
	> File Name: 21.const.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 08 Oct 2024 07:44:19 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    const int a = 123;
    const int b = 456;
    const int *p1 = &a;
    printf("*p1 = %d\n", *p1);
    p1 = &b;
    printf("*p1 = %d\n", *p1);

    int const *p2 = &a;
    int n = 789, m = 1000;
    int *const p3 = &n; 
    

    return 0;
}
