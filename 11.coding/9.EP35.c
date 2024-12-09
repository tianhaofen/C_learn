/*************************************************************************
	> File Name: 9.EP35.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 27 Nov 2024 08:49:43 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 1000000

int prime[MAX_N + 5] = {0, 1};
int is_prime[MAX_N + 5] = {0, 1};
void init_prime() {
    for (int i = 2; i <= MAX_N; i++){
        if(!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++){
            if (i * prime[j] > MAX_N) break;
            is_prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }

    return ;
}

int is_val(int n) {
    int digit = floor(log10(n)) + 1, tmp = n;
    for (int i = 1; i < digit; i++){
        tmp = tmp % 10 * (int)pow(10, digit - 1) + tmp / 10;
        if (is_prime[tmp]) return 0;

    }
    return 1;
}

int main() {
    init_prime();
    int sum = 0;
    for (int i = 1; i <= prime[0]; i++){
        sum += is_val(prime[i]);
    }
    printf("%d\n", sum);

    return 0;
}
