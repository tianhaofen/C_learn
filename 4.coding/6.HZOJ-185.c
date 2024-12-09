/*************************************************************************
	> File Name: 6.HZOJ-185.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 18 Sep 2024 03:02:46 PM CST
 ************************************************************************/

#include<stdio.h>

int f (int n){
    if (n <= 2) return 1;
    return f(n - 1) + f (n - 2);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
