/*************************************************************************
	> File Name: 8.EP06-1.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 26 Nov 2024 03:58:23 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 100

int main(){
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= MAX_N; i++){
        sum1 += i;
        sum2 += i * i;
    }
    printf("%d\n", sum1 * sum1 - sum2);

    return 0;
}
