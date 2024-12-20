/*************************************************************************
	> File Name: 1.prime.c
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 23 Sep 2024 03:03:35 PM CST
 ************************************************************************/

#include<stdio.h>

int prime[100] = {0};

void init_prime(int n){
    prime[0] = prime[1] = 1;
    for( int i = 2; i * i <= n; i++){
        if(prime[i])continue;
        printf("%d is prime : ", i);
        for(int j = i * i; j <= n; j += i){
            prime[j] = 1;
            printf(" %d", j);
        }
        printf("\n");
    }
    return;
}

int main(){
    init_prime(50);
    int x;
    while(scanf("%d", &x) != EOF){
        printf("prime[%d] = %d\n", x, prime[x]);
    }
    return 0;
}
