/*************************************************************************
	> File Name: 5.fseek_and_ftell.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 06 Nov 2024 08:33:32 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    FILE *fp = fopen("data5.txt", "w");
    printf("ftell(fp) = %ld\n", ftell(fp));
    fprintf(fp, "0123456789");
    printf("after print 0123456789 ftell(fp) = %ld\n", ftell(fp));
    fseek(fp, 2, SEEK_SET);
    printf("after fseek(2) ftell(fp) = %ld\n", ftell(fp));
    fprintf(fp, "abc");
    printf("after printf abc ftell(fp) = %ld\n", ftell(fp));

    return 0;
}
