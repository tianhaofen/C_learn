/*************************************************************************
	> File Name: 2.EP05.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 27 Nov 2024 03:08:30 PM CST
 ************************************************************************/

#include<stdio.h>

int gcd (int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

long long lcm (long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main(){
    long long ans = 1;
    for (int i = 2; i <= 20; i++){
        ans = lcm(ans, i);
    }

    printf("%lld\n", ans);

    return 0;
}
