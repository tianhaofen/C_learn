/*************************************************************************
	> File Name: 4.freeopen.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 24 Oct 2024 04:00:24 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    printf("hello freopen, stdout\n");
    char s[1000];
    while(scanf("%[^\n]", s) != EOF){
        getchar();
        printf("%s | hello world\n", s);
    }

    return 0;
}
