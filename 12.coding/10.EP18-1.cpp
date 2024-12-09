/*************************************************************************
	> File Name: 10.EP18-1.c
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 06 Dec 2024 09:18:30 AM CST
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define MAX_N 15


int val[MAX_N + 5][MAX_N + 5];
int F[MAX_N + 5][MAX_N + 5];

int dfs(int i, int j, int n) {
    if (i == n) return 0;
    if (F[i][j]) return F[i][j];
    int x = max(dfs(i + 1, j, n), dfs(i + 1, j + 1, n)) + val[i][j];
    F[i][j] = x;
    return x;
}

int main(){
    for (int i = 0; i < MAX_N; i++){
        for (int j = 0; j <= i; j++){
            scanf("%d", &val[i][j]);
        }
    }
    printf("%d\n", dfs(0, 0, MAX_N));

    return 0;
}
