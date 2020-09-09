/*************************************************************************
	> File Name: T1024与圆相关的计算.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月04日 星期四 20时38分14秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#define PI  3.14159

using namespace std;

int main () {
    double r;
    cin >> r;
    printf("%.4lf %.4lf %.4lf\n", 2 * r, 2 * PI * r, PI * pow(r, 2));
    return 0;
}
