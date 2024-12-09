/*************************************************************************
	> File Name: 23.HZOJ-98.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 06 Aug 2024 03:48:18 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char s[10];
    scanf("%s", s);
    int a = 0, b = 0, c = 0, d = 0;
    sscanf(s, "%1d%1d%1d%1d", &a, &b, &c, &d);
    printf("%d\n", a + b + c + d);
    //printf("a = %d\n", a);
    //printf("b = %d\n", b);
    //printf("c = %d\n", c);
    //printf("d = %d\n", d);
    return 0;
}
