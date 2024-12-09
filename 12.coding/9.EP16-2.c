/*************************************************************************
	> File Name: 9.EP16-2.c
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 06 Dec 2024 08:20:44 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int num[10] = {0 , 1};
    num[1] *= 1024;
    for (int i = 0; i < 10; i++){
        printf("%d\n", num[i]);
    }

    return 0;
}
