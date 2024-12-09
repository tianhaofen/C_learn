/*************************************************************************
	> File Name: 17.pointer_get_value.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 26 Sep 2024 05:24:27 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n = 0x61626364;
    char *p = (char *)&n;
    printf("*(p + 0) = %c\n", *(p + 0));
    printf("*(p + 1) = %c\n", *(p + 1));
    printf("*(p + 2) = %c\n", *(p + 2));
    printf("*(p + 3) = %c\n", *(p + 3));


    return 0;
}
