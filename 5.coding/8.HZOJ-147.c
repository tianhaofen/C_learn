/*************************************************************************
	> File Name: 8.HZOJ-147.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 24 Sep 2024 05:10:49 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

char s[10005];

int main(){
    scanf("%s", s);
    if (s[strlen(s) - 1] % 2){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }

    return 0;
}
