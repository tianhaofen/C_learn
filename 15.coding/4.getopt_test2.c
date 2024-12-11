/*************************************************************************
	> File Name: 3.getopt_test.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 10 Dec 2024 08:17:33 PM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

char *name = NULL;
int age = 10;
char *gender = "男";

int main(int argc, char *argv[]) {
    int opt;
    while ((opt = getopt(argc, argv, "nag")) != -1) {
        switch (opt) {
            case 'n' :
                name = "yu";
                break;
            case 'a':
                age = 28;
                break;
            case 'g':
                gender = "men";
                break;
            default:
                fprintf(stderr, "Usage : %s -n -a -g\n", argv[0]);
                return 1;
        }
    }
    printf("optind : %d\n, argv[%d] = %s, argv[%d] = %s\n", optind, optind, argv[optind], optind + 1, argv[optind + 1]);
    
    printf("Name : %s\n", name);
    printf("Age : %d\n", age);
    printf("Gender : %s\n", gender);

    return 0;
}
