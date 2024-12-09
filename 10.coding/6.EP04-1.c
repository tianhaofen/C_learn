/*************************************************************************
	> File Name: 6.EP04-1.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 26 Nov 2024 10:31:32 AM CST
 ************************************************************************/

#include<stdio.h>

int is_revese(int n) {
    int temp = 0, x = n;
    while(x) {
        temp = temp * 10 + x % 10;
        x /= 10;
    }
    return temp == n;
}

int main(){
    int ans = 0;
    for (int a = 100; a < 1000; a++){
        for (int b = 100; b < 1000; b++){
            if(is_revese(a * b) && a * b > ans){
                ans = a * b;
                printf("%d * %d = %d\n", a, b, ans);
            }
        }
    }
    printf("ans = %d\n", ans);

    return 0;
}
