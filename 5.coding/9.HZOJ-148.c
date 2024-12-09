/*************************************************************************
	> File Name: 9.HZOJ-148.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 24 Sep 2024 05:16:38 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(){
    char s[55];
    scanf("%s", s);
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--){
        
        s[i] ^= s[j];
        s[j] ^= s[i];
        s[i] ^= s[j];
    }
    printf("%s\n", s);

    return 0;
}
