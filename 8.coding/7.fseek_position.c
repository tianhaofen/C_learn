/*************************************************************************
	> File Name: 7.fseek_position.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 06 Nov 2024 08:52:37 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    FILE *fp = fopen("data7.txt", "w");
    fprintf(fp, "0123456789");
    fseek(fp, -4, SEEK_CUR);
    fprintf(fp, "xy");
    fseek(fp, -3, SEEK_END);
    fprintf(fp, "z");

    fseek(fp, 0, SEEK_END);
    fseek(fp, 0, SEEK_SET);

    return 0;
}
