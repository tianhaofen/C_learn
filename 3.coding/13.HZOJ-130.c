/*************************************************************************
	> File Name: 13.HZOJ-130.c
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 23 Aug 2024 04:17:49 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int m, n;
    double yu = 0;
    scanf("%d%d", &m, &n);
    for(int i = 0; i < n ; i++){
        yu += m;
        yu *= 1.00417;
    }
    printf("$%.2lf\n", yu);
   
    return 0;
}
