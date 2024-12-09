/*************************************************************************
	> File Name: 9.EP16.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 05 Dec 2024 08:46:14 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 400

int num[MAX_N + 5];

int main(){
    num[0] = num[1] = 1;
    for (int i = 0; i < 2; i++){
        for (int j = 1; j <= num[0]; j++) num[j] *= 1024;
        for (int k = 1; k <= num[0]; k++) {
            if (num[k] < 10) continue;
            num[k + 1] += num[k] / 10;
            num[k] %= 10;
            num[0] += (k == num[0]);

        }
    }
    int sum = 0;
    for (int i = num[0]; i >= 1; i--){
        printf("%d\n", num[i]);
    }
    

    return 0;
}
