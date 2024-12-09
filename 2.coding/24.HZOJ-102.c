/*************************************************************************
	> File Name: 24.HZOJ-102.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 06 Aug 2024 04:07:28 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a, b, c, t;
    scanf("%d%d%d%d", &a, &b, &c, &t);
    double t1;
    t1 = (1 - (1.0 / a + 1.0 / b) * t) / (1.0 / a + 1.0 / b - 1.0 / c);
    printf("%.2lf\n", t + t1);
    return 0;
}
