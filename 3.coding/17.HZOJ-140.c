/*************************************************************************
	> File Name: 17.HZOJ-140.c
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 23 Aug 2024 05:31:40 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < 2 * n - 1; i++){
        int a_num = 2 * n - 2 * abs(i - n + 1) - 1;
        int b_num = abs(i - n + 1);
        char ch = 'A' + n - 1 - b_num;
        for (int j = 0; j < b_num; j++) printf(" ");
        for (int j = 0; j < a_num; j++) printf("%c", ch);
        printf("\n");
    }
}
