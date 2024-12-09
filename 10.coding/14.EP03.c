/*************************************************************************
	> File Name: 14.EP03.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 26 Nov 2024 07:51:36 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 600851475143LL


int main(){
    long long ans = 0, i = 2, N = MAX_N, n = 1;
    while(i * i <= N){
        printf("%lld:\n", n);
        if(N % i == 0){
            ans = i;
            printf("ans = %lld\n", i);
        } 
        while (N % i == 0){
            printf("N = %lld ", N);
            //N /= i;
            printf("N / i = %lld\n", N /= i);
        }
        i += 1;
        n += 1;
    }
    if (N != 1) ans = N;
    printf("%lld\n", ans);

    return 0;
}
