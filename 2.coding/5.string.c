/*************************************************************************
	> File Name: 5.string.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 30 Jul 2024 04:38:09 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char s[100] = "hello world";
    printf("%s\n", s);
    scanf("%s", s);
    printf("scanf s : %s\n", s);
    getchar();
    scanf("%[a-zA-Z]", s);
    printf("%%[a-zA-Z] : %s\n", s);


    return 0;
}
