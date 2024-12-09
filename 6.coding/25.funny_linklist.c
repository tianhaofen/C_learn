/*************************************************************************
	> File Name: 25.funny_linklist.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 23 Oct 2024 06:45:00 PM CST
 ************************************************************************/

#include<stdio.h>

#ifdef OFFSET1

#define offset(T, d)({\
    T t;\
    (void *)(&t.d) - (void *)(&t);\
})

#else

#define start(addr, T, d) ((T *)(((void *)addr) - offset(T, d)))
#define offset(T, d) ((size_t)(&(((T *)(0))->d)))

#endif

struct A{
    int a;
    char b;
    double c;
};

int main(){
    printf("offset(A, a) = %lu\n", offset(struct A, a));
    printf("offset(A, b) = %lu\n", offset(struct A, b));
    printf("offset(A, c) = %lu\n", offset(struct A, c));
    struct A a;
    printf("&a = %p\n", &a);
    printf("start(&a.a, A, a) = %p\n", start(&a.a, struct A, a));
    printf("start(&a.b, A, a) = %p\n", start(&a.b, struct A, b));
    printf("start(&a.c, A, a) = %p\n", start(&a.c, struct A, c));

    return 0;
}
