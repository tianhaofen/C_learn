/*************************************************************************
	> File Name: 15.EP14.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 04 Dec 2024 09:32:58 AM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000

int calc_len(long long n){
    if (n == 1) return 1;
    if (n & 1) return calc_len(n * 3 + 1) + 1;
    return calc_len(n >> 1) + 1;

}

int main(){
    int ans = 0, len = 0;
    for (int i = 1; i < MAX_N; i++){
        int temp_len = calc_len(i);
        if (temp_len <= len) continue;
        ans = i;
        len = temp_len;
    }
    printf("ans = %d, len = %d\n", ans, len);

    return 0;
}
