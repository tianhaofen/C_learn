/*************************************************************************
	> File Name: 15.HZOJ-137.c
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 23 Aug 2024 04:47:39 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    char ch = 'A';
    scanf("%d", &n);
    for (int i = n; i >= 1; i--){
        for (int j = 0; j < i; j++){
            printf("%c", ch);
            ch += 1;
        }
        printf("\n");
    }
    return 0;
}
