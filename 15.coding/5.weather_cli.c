/*************************************************************************
	> File Name: 5.weather_cli.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 11 Dec 2024 03:58:13 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>

#define VERSION "1.0"

typedef struct {
    char city[50];
    int temp;
    char condition[50];
} WeatherInfo;

WeatherInfo weather_data[] = {
    {"Beijing", 15, "Sunny"},
    {"Shanghai", 18, "Cloudy"},
    {"New York", 10, "Rainy"},
    {"London", 7, "Snowy"},
    {"", 0, ""}
};

const char *get_weather_emoji(const char *condition){
    if (strcmp(condition, "Sunny") == 0) {
        return "☀";
    }
    else if (strcmp(condition, "Cloudy") == 0) {
        return "🌤";
    }
    else if (strcmp(condition, "Rainy") == 0) {
        return "☔";
    }
    else if (strcmp(condition, "Snowy") == 0) {
        return "❄";
    }
    else return "❓";
}

void print_usage(const char *cmdname) {
    printf("Usage: %s [OPTIONS]!\n", cmdname);
    printf("Optinos:\n");
    printf("-h, --help                  Show this help message\n");
    printf("-v, --version               Show this version information\n");
    printf("-c City, --city City        Specity the city of weather query\n");
    printf("-t, --temp                  Show the temp of the city\n");
    printf("-C, --condition             Show the condition of the weather\n");
    printf("-a, --all                   Show all weather information of the DB\n");

    return ;
}

void print_all_weather() {
    for (int i = 0; weather_data[i].city[0] != '\0'; i++){
        printf("%s weather: %d℃ , %s, %s\n", weather_data[i].city, weather_data[i].temp, weather_data[i].condition, get_weather_emoji(weather_data[i].condition));
    }
    return ;
}

void print_weather(const char *city, int C_flag, int t_flag) {
    for (int i = 0; weather_data[i].city[0] != '0'; i++){
        if (strcmp(city, weather_data[i].city) == 0) {
            if (C_flag == 0 && t_flag == 0 || C_flag == 1 && t_flag == 1){
                printf("%s weather: %d℃ , %s, %s\n", weather_data[i].city, weather_data[i].temp, weather_data[i].condition, get_weather_emoji(weather_data[i].condition));
            }
            else if (C_flag){
                printf("%s weather: %s, %s\n", weather_data[i].city, weather_data[i].condition, get_weather_emoji(weather_data[i].condition));
            }
            else {
                printf("%s weather: %d℃ \n", weather_data[i].city, weather_data[i].temp);
            }

            return ;
        }
    }
}

int main(int argc, char *argv[]){
    int opt;
    int t_flag = 0, C_flag = 0, a_flag = 0;
    char *city = NULL;

    while ((opt = getopt(argc, argv, "vhtc:Ca")) != -1) {
        switch (opt){
            case 'h':
                print_usage(argv[0]);
                return 0;
            case 'v':
                printf("weather_cli version : %s\n", VERSION);
                return 0;
            case 'c':
                city = optarg;
                break;
            case 't':
                t_flag = 1;
                break;
            case 'C':
                C_flag = 1;
                break;
            case 'a':
                a_flag = 1;
                break;
            default:
                print_usage(argv[0]);
                return -1;
        }
    }
    if (a_flag) {
        print_all_weather();
    }
    else if(city != NULL) {
        print_weather(city, C_flag, t_flag);
    }

    return 0;
}
