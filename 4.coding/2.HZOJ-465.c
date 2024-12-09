/*************************************************************************
	> File Name: 2.HZOJ-465.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 12 Sep 2024 06:12:28 PM CST
 ************************************************************************/

#include<stdio.h>
int digit(long long n, long long k){
    if (k == 1) return n % 10;
    return digit(n / 10, k - 1);
}
int main(){
    long long n, k;
    scanf("%lld%lld", &n, &k);
    printf("%d\n", digit(n, k));
    return 0;
}
