/*************************************************************************
	> File Name: 19.HZOJ-90.c
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 02 Aug 2024 05:24:36 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int bai, shi, ge;
    bai = a / 100;
    shi = a % 100 / 10;
    ge  = a % 10;
    printf("%d\n", bai);
    printf("%d\n", shi);
    printf("%d\n",ge);
    return 0;
}
