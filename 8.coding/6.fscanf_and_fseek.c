/*************************************************************************
	> File Name: 6.fscanf_and_fseek.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 06 Nov 2024 08:42:19 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    FILE *fp = fopen("data5.txt", "r");
    int n;
    fseek(fp, 5, SEEK_SET);
    fscanf(fp, "%d", &n);
    printf("fscanf n = %d\n", n);

    return 0;
}
