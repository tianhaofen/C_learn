/*************************************************************************
	> File Name: 12.HZOJ-828.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 25 Sep 2024 04:18:33 PM CST
 ************************************************************************/

#include<stdio.h>

void rotate_array(int *nums, int n, int p) {
    for (int i = 0, j = p - 1; i < j; i++, j--){
        nums[i] ^= nums[j];
        nums[j] ^= nums[i];
        nums[i] ^= nums[j];
    }
    for (int i = p, j = n - 1; i < j; i++, j--){
        nums[i] ^= nums[j];
        nums[j] ^= nums[i];
        nums[i] ^= nums[j];
    }
    for (int i = 0, j = n - 1; i < j; i++, j--){
        nums[i] ^= nums[j];
        nums[j] ^= nums[i];
        nums[i] ^= nums[j];
    }
    return ;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n + 5];
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    rotate_array(arr, n, k);
    for (int i = 0; i < n; i++) {
        if (i != 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
