/*************************************************************************
	> File Name: 7.sscanf.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 31 Jul 2024 03:37:03 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char s[100] = "123 456 789";
    int a, b, c;
    sscanf(s,"%d%d%d", &a, &b, &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
