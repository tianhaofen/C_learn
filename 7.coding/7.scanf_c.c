/*************************************************************************
	> File Name: 7.scanf_c.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 24 Oct 2024 05:48:24 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    char c1,c2;
    int a,b;
    scanf("%d", &a);
    scanf("%c%c", &c1, &c2);
    scanf("%d", &b);
    printf("a = %d, b = %d\n", a, b);
    printf("c1 = %d, c2 = %d\n", c1, c2);


    return 0;
}
