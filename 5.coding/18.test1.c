/*************************************************************************
	> File Name: 18.test1.c
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 27 Sep 2024 04:31:27 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);
    unsigned int n;
    char *p = (char *)&n;
    p[3] = a;
    p[2] = b;
    p[1] = c;
    p[0] = d;
    printf("n = %u\n", n);

    return 0;
}
