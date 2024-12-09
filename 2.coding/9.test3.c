/*************************************************************************
	> File Name: 9.test3.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 31 Jul 2024 04:28:57 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char s[100], t[100];
    scanf("%[^\n]", s);
    
    int n = 0;
    n = sprintf(t, "| %s |", s);
    for(int i = 0; i < n; i++) printf("-");
    printf("\n");
    printf("| %s |\n", s);
    for(int i = 0; i < n; i++) printf("-");
    printf("\n");

    return 0;
}
