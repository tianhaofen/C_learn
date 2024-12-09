/*************************************************************************
	> File Name: 3.EP12.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 05 Dec 2024 02:02:56 PM CST
 ************************************************************************/

#include<stdio.h>

long long triangle(int n) {
    return (1 + n) * n >> 1;
}

int get_factor(long long val) {
    int cnt = 0;
    for (int i = 1; i * i <= val; i++) {
        if (val % i == 0) cnt += 2;
        if (i * i == val) cnt--;
    }
    
    return cnt;
}

int main(){
    int n = 7;
    while(1) {
        n++;
        long long val = triangle(n);
        if (get_factor(val) <= 500) continue;
        printf("%lld\n", val);
        break;
    }

    return 0;
}
