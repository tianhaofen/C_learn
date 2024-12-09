/*************************************************************************
	> File Name: 1.EP09.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 05 Dec 2024 10:07:36 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    for (int a = 1; a <= 334; a++){
        for (int b = a; b <= 500; b++){
            int c = 1000 - a - b;
            if(a * a + b * b != c * c) continue;
            printf("a = %d, b = %d, c = %d\n", a, b, c);
            printf("abc = %d\n", a * b * c);
            break;
        }
    }

    return 0;
}
