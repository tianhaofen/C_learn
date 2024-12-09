/*************************************************************************
	> File Name: 1.HZOJ-464.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 12 Sep 2024 05:32:19 PM CST
 ************************************************************************/

#include<stdio.h>
int is_leap_year(int x){
    if(x % 4 == 0 && x % 100 != 0) return 1;
    if(x % 400 == 0) return 1;
    return 0;
}
int main(){
    int x, y, ans = 0;
    scanf("%d%d", &x, &y);
    for (int i = x; i <= y; i++){
        ans += is_leap_year(i);
    }
    printf("%d\n", ans);
    return 0;
}
