/*************************************************************************
	> File Name: 8.sprintf.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 31 Jul 2024 04:20:21 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char str[100] = "192.168.1.245";
    int a, b, c, d;
    sscanf(str, "%d.%d.%d.%d", &a, &b, &c, &d);
    sprintf(str, "%d:%d:%d:%d", a, b, c, d);
    printf("str = %s\n",str);

    return 0;
}
