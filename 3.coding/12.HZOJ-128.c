/*************************************************************************
	> File Name: 12.HZOJ-128.c
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 23 Aug 2024 04:08:22 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n, sum = 0;
    scanf("%d", &n);
    for(int i = 0, a; i < n; i++){
        scanf("%d", &a);
        sum += a;
    }
    printf("%.2lf\n", 1.0 * sum / n);

    return 0;
}
