/*************************************************************************
	> File Name: 9.HZOJ-109.c
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 19 Aug 2024 04:49:22 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char s[10];
    scanf("%s", s);
    switch (s[0]) {
        case 'h': printf("He\n"); break;
        case 'l': printf("Li\n"); break;
        case 'c': printf("Cao\n"); break;
        case 'd': printf("Duan\n"); break;
        case 'w': printf("Wang\n"); break;
        default : printf("Not Here\n"); break;
    }

    return 0;
}
