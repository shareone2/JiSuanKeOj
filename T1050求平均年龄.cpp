/*************************************************************************
	> File Name: T1050求平均年龄.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月07日 星期日 14时51分08秒
 ************************************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

int main () {
    int n;
    double t, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        sum += t;
    }
    printf("%.2lf\n", sum / n);
    return 0;
}
