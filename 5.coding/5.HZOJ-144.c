/*************************************************************************
	> File Name: 5.HZOJ-144.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 24 Sep 2024 04:18:59 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(){
    char str[105];
    scanf("%s", str);
    int cnt = 0;
    for (int i = 0; str[i]; i++){
         cnt += (str[i] == 'A');
    }
    printf("%d\n", cnt);

    return 0;
}
