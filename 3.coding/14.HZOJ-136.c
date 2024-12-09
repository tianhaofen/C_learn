/*************************************************************************
	> File Name: 14.HZOJ-136.c
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 23 Aug 2024 04:34:25 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if (i % 7 == 0)printf("%d\n", i);
    }
    return 0;
}
