/*************************************************************************
	> File Name: 11.HZOJ-150.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 25 Sep 2024 03:57:26 PM CST
 ************************************************************************/

#include<stdio.h>

int arr[205][205];
int n, m, a;


int main(){
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int x = j, y = n - i -1;
            scanf("%d", &a);
            arr[x][y] = a;
        }
    }

    for (int i = 0; i < m; i ++){
        for (int j = 0; j < n; j++){
            if (j) printf(" ");
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
