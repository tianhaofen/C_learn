/*************************************************************************
	> File Name: 6.HZOJ-145.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 24 Sep 2024 04:32:03 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(){
    char s[105], t[105];
    int s_len, t_len = -1;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%s", s);
        s_len = strlen(s);
        if (s_len > t_len){
            strcpy(t, s);
            t_len = s_len;
        }
    }
    printf("%s\n", t);

    return 0;
}
