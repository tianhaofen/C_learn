/*************************************************************************
	> File Name: 13.EP28.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 26 Nov 2024 07:32:01 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1001

int main(){
    int sum = 1;
    for (int l = 3; l <= MAX_N; l += 2){
        sum += 4 * l * l - 6 * l + 6;
    }
    printf("%d\n", sum);

    return 0;
}
