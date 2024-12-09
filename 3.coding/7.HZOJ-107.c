/*************************************************************************
	> File Name: 7.HZOJ-107.c
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 19 Aug 2024 04:24:16 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
   // if (n % 7 == 0 && n % 2 != 0)printf("YES\n");
   // else printf("NO\n");
    printf("%s\n", n % 7 == 0 && n % 2 != 0 ? "YES" : "NO");

    return 0;
}
