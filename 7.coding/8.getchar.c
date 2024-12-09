/*************************************************************************
	> File Name: 8.getchar.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 24 Oct 2024 05:58:12 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    //getchar();
    fflush(stdin);
    char c = 'x';
    scanf("%c", &c);
    printf("a = %d, b = %d, c = %c\n", a, b, c);
    while(scanf("%c", &c) != EOF){
        printf("%c",  c);    
    }
    printf("\n");
    

    return 0;
}
