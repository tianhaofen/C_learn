/*************************************************************************
	> File Name: 5.goto_if_else.c
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 16 Aug 2024 04:26:36 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    n % 2 == 0 && ({
        goto if_stmt;
        1;
    });    
    !(n % 2 == 0) && ({
        goto else_stmt;
        1;
    });
if_stmt:
    printf("n is even\n");
    goto if_end;

else_stmt:
    printf("n is odd\n");

if_end:

    return 0;
}
