/*************************************************************************
	> File Name: 4.HZOJ-467.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 18 Sep 2024 02:48:16 PM CST
 ************************************************************************/

#include<stdio.h>

long long  f(int n){
    if(n == 1) return 1;
    return n * f(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld\n", f(n));
    return 0;
}
