/*************************************************************************
	> File Name: 1.gcd.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 27 Nov 2024 03:03:54 PM CST
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    
    return 0;
}
