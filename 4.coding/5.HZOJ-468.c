/*************************************************************************
	> File Name: 5.HZOJ-468.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 18 Sep 2024 02:55:47 PM CST
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d\n", gcd(m, n));
    return 0;
}
