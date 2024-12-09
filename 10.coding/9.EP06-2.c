/*************************************************************************
	> File Name: 9.EP06-2.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 26 Nov 2024 04:06:52 PM CST
 ************************************************************************/

#include<stdio.h>
#define n 100

int main(){
    int sum1 = (1 + n) * n >> 1;
    int sum2 = n * (n + 1) * (2 * n + 1) / 6;
    printf("%d\n", sum1 * sum1 - sum2);

    return 0;
}
