/*************************************************************************
	> File Name: 19.demo.c
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 27 Sep 2024 04:41:50 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int arr[] = {0, 1, 2, 3, 4, 5,6};
    int *p = arr;
    for (int i = 0; i < 3; i++){
        printf("%d\n", (i + 5)[&p[1] - 2]);
    }

    return 0;
}
