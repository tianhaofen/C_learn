/*************************************************************************
	> File Name: 3.scanf_printf.c
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 22 Jul 2024 10:49:55 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a,b,c,d;
    int ret_scanf=scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("ret_scanf = %d\n",ret_scanf);
    printf("%d %d %d %d\n",a,b,c,d);
    return 0;
}
