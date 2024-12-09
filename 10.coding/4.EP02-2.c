/*************************************************************************
	> File Name: 4.EP02-2.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 26 Nov 2024 09:35:02 AM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 4000000

int fib[3] = {0, 1, 2};

int main(){
    int n = 2, sum = 2;
    while (fib[n % 3] + fib[(n-1) % 3] < MAX_N ){
        n += 1;
        fib[n % 3] = fib[(n-1) % 3] + fib[(n -2) % 3];
        if (!(fib[n % 3] & 1)) sum += fib[n %3];
    }
    printf("%d\n", sum);

    return 0;
}
