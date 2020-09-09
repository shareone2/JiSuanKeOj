/*************************************************************************
	> File Name: T1052均值.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月06日 星期六 15时41分50秒
 ************************************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

int main () {
    double a[105], sum = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    printf("%.4lf\n", sum / n);
    return 0;
}
