/*************************************************************************
	> File Name: 11.EP18-2.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Fri 06 Dec 2024 10:34:27 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 15

int dp[MAX_N + 5][MAX_N + 5];

int main(){
    for (int i = 0; i < MAX_N; i++){
        for (int j = 0; j <= i; j++){
            cin >> dp[i][j];
        }
    }
    for (int i = MAX_N - 2; i >= 0; i--){
        for (int j = 0; j <= i; j++){
            dp[i][j] += max(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }
    cout << dp[0][0] << endl;

    return 0;
}
