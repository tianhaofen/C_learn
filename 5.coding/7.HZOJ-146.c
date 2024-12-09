/*************************************************************************
	> File Name: 7.HZOJ-146.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 24 Sep 2024 04:46:11 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    char s[50];
    scanf("%s", s);
    for (int i = 0; s[i]; i++){
        if (s[i] <= 'z' && s[i] >= 'a'){
            if (s[i] == 'z') s[i] = 'a';
            else s[i] += 1;
        }
        if (s[i] <= 'Z' && s[i] >= 'A'){
            if (s[i] == 'Z') s[i] = 'A';
            else s[i] += 1;
        }
    }
    printf("%s\n", s);

    return 0;
}
