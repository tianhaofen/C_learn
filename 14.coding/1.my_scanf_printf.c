/*************************************************************************
	> File Name: 1.my_scanf_printf.c
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 09 Dec 2024 03:36:50 PM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdarg.h>
#define BUFFER_SIZE 1024

void my_scanf(const char *format, ...) {
    char buffer[BUFFER_SIZE];
    va_list args;
    va_start(args, format);
    ssize_t len = read(0, buffer, BUFFER_SIZE);
    vsscanf(buffer, format, args);
    va_end(args);

    
}

void my_printf(const char *format, ...) {
    char buffer[BUFFER_SIZE];
    va_list args;
    va_start(args, format);
    ssize_t len = vsnprintf(buffer, BUFFER_SIZE, format, args);
    va_end(args);
    write(1, buffer, len);

}

int main() {
    int num;
    char str[10];
    my_printf("Please input a number : \n");
    my_scanf("%d", &num);
    my_printf("The number input is : %d\n", num);
    
    my_printf("Please input a string : \n");
    my_scanf("%s", str);
    my_printf("The str input is : %s\n", str);

    return 0;
}
