/*************************************************************************
	> File Name: 6.test2.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 30 Jul 2024 05:35:36 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char s[100];
    int n;
    scanf("%[^\n]", s);
    n = printf("s = %s", s);
    printf(" : %d\n", n);

    return 0;
}
