/*************************************************************************
	> File Name: 20.enum.c
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 17 Oct 2024 05:59:46 PM CST
 ************************************************************************/

#include<stdio.h>

enum Number{
    zero,
    one,
    two = 10,
    three,
    four
};

enum FUNC_DATA{
    #ifdef TEST1
    FUNC_test1,
    #endif
    #ifdef TEST2
    FUNC_test2,
    #endif
    #ifdef TEST3
    FUNC_test3,
    #endif
    #ifdef TEST4
    FUNC_test4,
    #endif
    FUNC_MAX
};

#define DEFINE_FUNC(name)\
void name(){\
    printf("this is function : %s\n", #name);\
}

DEFINE_FUNC(test1)
DEFINE_FUNC(test2)
DEFINE_FUNC(test3)
DEFINE_FUNC(test4)

void(*func_arr[FUNC_MAX])() = {
    #ifdef TEST1
    test1,
    #endif
    #ifdef TEST2
    test2,
    #endif
    #ifdef TEST3
    test3,
    #endif
    #ifdef TEST4
    test4,
    #endif
};

#define P(a, format){\
    printf("%s = " format "\n", #a, a);\
}

int main(){
    for (int i = 0; i < FUNC_MAX; i++){
        func_arr[i]();
    }
    enum Number a;
    a = zero;
    P(a, "%d");
    a = one;
    P(a, "%d");
    a = two;
    P(a, "%d");
    a = three;
    P(a, "%d");
    a = four;
    P(a, "%d");

    return 0;
}
