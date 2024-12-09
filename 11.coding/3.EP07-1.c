/*************************************************************************
	> File Name: 3.EP07-1.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 27 Nov 2024 03:31:23 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 10001

int is_prime(int n) {
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int cnt = 0;
    for (int i = 2; ; i++){
        if (!is_prime(i)) continue;
        cnt += 1;
        if (cnt == MAX_N){
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
