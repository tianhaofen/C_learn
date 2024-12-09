/*************************************************************************
	> File Name: 5.control_reopen.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 24 Oct 2024 04:17:53 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    char s[1000];
    int i = 1;
    while(scanf("%[^\n]", s) != EOF){
        getchar();
        fprintf(stderr, "%d test case\n", i++);
        printf("%s | hello world\n", s);
    }

    return 0;
}
