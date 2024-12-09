/*************************************************************************
	> File Name: 1.EP01-1.c
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 25 Nov 2024 07:29:10 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000

int is_val(int n){
    return (n % 3 == 0 || n % 5 == 0);
}

int main(){
    int sum = 0;
    for (int i = 1; i < MAX_N; i++){
        if (is_val(i)) sum += i;

    }
    printf("%d\n", sum);

    return 0;
}
