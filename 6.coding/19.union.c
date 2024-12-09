/*************************************************************************
	> File Name: 19.union.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 16 Oct 2024 08:02:01 PM CST
 ************************************************************************/

#include<stdio.h>

union A{
    struct{
        unsigned char byte1;
        unsigned char byte2;
        unsigned char byte3;
        unsigned char byte4;
    } bytes;
    unsigned int number;
};

#define P(a, format){\
    printf("%s = " format "\n", #a, a);\
}

int main(){
    union A a;
    a.number = 0x61626364;
    P(a.number, "%x");
    
    P(a.bytes.byte1, "%x");
    P(a.bytes.byte2, "%x");
    P(a.bytes.byte3, "%x");
    P(a.bytes.byte4, "%x");

    return 0;
}
