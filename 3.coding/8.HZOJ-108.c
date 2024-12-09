/*************************************************************************
	> File Name: 8.HZOJ-108.c
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 19 Aug 2024 04:40:45 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char s[10];
    double n, m;
    scanf("%s", s);
    scanf("%lf%lf", &n, &m);
    printf("%.2lf\n", s[0] == 'r' ? m * n : m * n / 2.0);

    return 0;
}
