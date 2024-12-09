/*************************************************************************
	> File Name: 8.built_in.c
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 14 Oct 2024 07:48:43 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    printf("__DATE__ = %s\n", __DATE__);
    printf("__TIME__ = %s\n", __TIME__);
    printf("__LINE__ = %d\n", __LINE__);
    printf("__FILE__ = %s\n", __FILE__);
    printf("__func__ = %s\n", __func__);
    printf("__PRETTY_FUNCTION__ = %s\n", __PRETTY_FUNCTION__);

    return 0;
}
