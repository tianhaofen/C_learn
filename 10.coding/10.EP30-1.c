/*************************************************************************
	> File Name: 10.EP30-1.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 26 Nov 2024 04:25:22 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 2177280

int is_val(int n) {
    int x = n, temp = 0;
    while (x) {
        temp += (int)pow(x % 10, 5);
        x /= 10;
    }
    return temp == n;
}

int main(){
    int sum = 0;
    for (int i = 2; i <= MAX_N; i++){
        if (!is_val(i)) continue;
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}
