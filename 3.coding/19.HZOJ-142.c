/*************************************************************************
	> File Name: 19.HZOJ-142.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 03 Sep 2024 04:53:41 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a, b, c = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++){
        int flag = 1;
        for (int j = 2; j * j <= i && flag; j++ ){
            if (i % j == 0) flag = 0;
        }
        if (flag == 0) continue;
        int x = i, y = 0;
        while(x){
            y = y * 10 + x % 10;
            x /= 10;
        }
        if (y != i)continue;
        if (c) printf(" ");
        c +=  printf("%d", i);

    }
    return 0;
}
