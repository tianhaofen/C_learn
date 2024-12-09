/*************************************************************************
	> File Name: students_table.c
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 12 Nov 2024 08:20:00 PM CST
 ************************************************************************/

#include <stdio.h>
#include <database.h>

static const char *table_name = "student table";
static const char *table_file = "./data/student_data.dat";
static const char *header_name[] = {"name", "age", "class", "height"};
static int header_len[] = {15, 6, 6, 6};

typedef struct Student {
    char name[20];
    int age;
    int class;
    double height;
} table_data;

#include"table_unit.haizei"

static void printData(void *__data) {
    table_data *data = (table_data *)(__data);
    char frm[100];
    sprintf(frm, "%%%ds|%%%dd|%%%dd|%%%d.2lf|", header_len[0], header_len[1], header_len[2], header_len[3]);
    printf(frm, data->name, data->age, data->class, data->height);
    printf("\n");

    return ;
}

static void scanData(void *__data){
    table_data *data = (table_data *)(__data);
    scanf("%s%d%d%lf", data->name, &(data->age), &(data->class), &(data->height));

    return ;
}
