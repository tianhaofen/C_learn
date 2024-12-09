/*************************************************************************
	> File Name: 10.HZOJ-237.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 19 Sep 2024 04:49:16 PM CST
 ************************************************************************/

#include<stdio.h>

int arr[10], vis[10] = {0};

void print_one_result(int n) {
    for (int i = 0; i < n; i++){
        if (i)printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return;
}

void f(int i, int n){
    if(i == n) {
        print_one_result(n);
        return;
    }
    for (int k = 1; k <= n; k++){
        if (vis[k]) continue;
        arr[i] = k;
        vis[k] = 1;
        f(i + 1, n);
        vis[k] = 0;
    }
    return;
}

int main(){
    int n;
    scanf("%d", &n);
    f(0, n);
    return 0;
}
