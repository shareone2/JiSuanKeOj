/*************************************************************************
	> File Name: T1131矩阵交换行.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月06日 星期六 16时49分52秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    char a[5][5], b[5][5];
    int m, n;
    for (int i = 0; i <= 4; i++) {
        for (int j = 0; j <= 4; j++) {
            cin >> a[i][j];
        }       
    }
    cin >> m >> n;
    for (int i = 0; i <= 4; i++) {
        for (int j = 0; j <= 4; j++) {
            b[i][j] = a[i][j];
        }
    }
    for (int i = 0; i <= 4; i++) {
        b[m - 1][i] = a[n - 1][i];
        b[n - 1][i] = a[m - 1][i];
    }
    for (int i = 0; i <= 4; i++) {
        for (int j = 0; j <= 4; j++) {
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
