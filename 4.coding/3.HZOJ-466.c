/*************************************************************************
	> File Name: 3.HZOJ-466.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 12 Sep 2024 06:23:03 PM CST
 ************************************************************************/

#include<stdio.h>
int is_palindrome(int x){
    int z = x, y = 0;
    while(x){
        y = y * 10 + x % 10;
        x /= 10;
    }
    return y == z;
}
int main(){
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        ans += is_palindrome(i);
    }
    printf("%d\n", ans);
    return 0;
}
