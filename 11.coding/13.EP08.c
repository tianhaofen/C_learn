/*************************************************************************
	> File Name: 13.EP08.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 03 Dec 2024 06:42:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include"EP08.h"

int main(){
    long long p = 0, ans = 0, m = 1;
    for (int i = 0; i <= 987; i++){
        p = (long long)(num[i] - '0') *  (long long)(num[i + 1] - '0') *  (long long)(num[i + 2] - '0') *  (long long)(num[i + 3] - '0') *  (long long)(num[i + 4] - '0') *  (long long)(num[i + 5] - '0') *  (long long)(num[i + 6] - '0') *  (long long)(num[i + 7] - '0') *  (long long)(num[i + 8] - '0') *  (long long)(num[i + 9] - '0') *  (long long)(num[i + 10] - '0') *  (long long)(num[i + 11] - '0') *  (long long)(num[i + 12] - '0');
        if (p > ans) ans = p;
    }
    printf("%lld\n", ans);

    return 0;
}
