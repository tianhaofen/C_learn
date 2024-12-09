/*************************************************************************
	> File Name: 4.test5.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 15 Aug 2024 05:11:40 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int f[20];
    f[0] = 1;
    f[1] = 1;
    for(int i = 0; i < 20; i++){
        if(i <= 1)printf("%d\n", f[i]);
        else{
            f[i] = f[i-1] + f[i-2];
            printf("%d\n", f[i]);
        }
    }
    return 0;
}
