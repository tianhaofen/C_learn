/*************************************************************************
	> File Name: 17.struct.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 16 Oct 2024 06:07:22 PM CST
 ************************************************************************/

#include<stdio.h>

struct A {
    char a;
    short b;
};

struct B {
    struct A a
    struct{
        char b;
        double c;
    };
    int d;
};

typedef struct person {
    char name[20];
    int arg;
    char gender;
    float height;
}person;

void output(struct person *p){
    printf("use pointer p : (%s, %d, %c, %f)\n",
        p->name,
        p->arg,
        p->gender,
        p->height
    );
    return ;
}

void set_buff(char *buff, void *head, void *begin, void *end, char ch){
    while(begin != end){
        buff[begin - head] = ch;
        begin += 1;
    }
}

void output_person(){
    int n = sizeof(struct person);
    char buff[n];
    for (int i = 0; i < n; i ++) buff[i] = '.';
    int len = 0;
    for (int i = 0; i < n; i++){
        len += printf("%3d", i);
    }
    printf("\n");
    for (int i = 0; i < len ; i++)printf("-");
    printf("\n");
    person hug1;
    set_buff(buff, hug1.name, hug1.name, 20 + (void *)hug1.name, 'n');
    set_buff(buff, hug1.name, &hug1.arg, 4 + (void *)&hug1.arg, 'a');
    set_buff(buff, hug1.name, &hug1.gender, 1 + (void *)&hug1.gender, 'g');
    set_buff(buff, hug1.name, &hug1.height, 4 + (void *)&hug1.height, 'h');
    for (int i = 0; i < n; i++){
        printf("%3c", buff[i]);
    }
    printf("\n");
    return;

}

int main(){
    struct person hug = {"Captain HU", 18, 'M', 2.13};
    person su = {"Su", 49, 'M', 2.12};
    printf("%s, %d, %c, %f\n", hug.name, hug.arg, hug.gender, hug.height);
    output(&hug);
    output(&su);
    printf("sizeof(struct person) = %lu\n", sizeof(struct person));
    output_person();

    return 0;
}
