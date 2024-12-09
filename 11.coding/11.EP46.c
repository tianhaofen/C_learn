/*************************************************************************
	> File Name: 11.EP46.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 03 Dec 2024 02:54:28 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};
int a[MAX_N + 5] = {0};

void init_prime() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]){
            prime[++prime[0]] = i;
            a[i] = 1;
        }
        for (int j = 1; j <= prime[0]; j++){
            if (i * prime[j] > MAX_N) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main(){
    init_prime();
    for (int i = 1; i <= prime[0]; i++){
        for (int n = 1; ; n++){
            if (prime[i] + 2 * n * n > MAX_N) break;
            a[prime[i] + 2 * n * n] = 1;
        }
    }
    for (int i = 9; i <= MAX_N; i += 2){
        if (a[i]) continue;
        printf("%d\n", i);
        break;
    }

    return 0;
}
