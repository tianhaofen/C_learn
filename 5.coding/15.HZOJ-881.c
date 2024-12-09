/*************************************************************************
	> File Name: 15.HZOJ-881.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 26 Sep 2024 04:05:27 PM CST
 ************************************************************************/

#include<stdio.h>

void swap(int *a, int *b){
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
    return;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);


    return 0;
}
