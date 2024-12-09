/*************************************************************************
	> File Name: 8.EP15.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 05 Dec 2024 08:29:56 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    long long n = 40, m = 20, ans = 1;
    while (m > 1){
        if (n > 20) ans *= (n--);
        if (m && ans % m == 0) ans /= (m--);
    }
    printf("%lld\n", ans);

    return 0;
}
