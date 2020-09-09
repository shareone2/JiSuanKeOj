/*************************************************************************
	> File Name: T1026计算球的体积.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 07时54分44秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#define PI 3.14

using namespace std;

int main () {
    double r;
    cin >> r;
    printf("%.2lf\n", 4.0 / 3.0 * PI * pow(r, 3));        
    return 0;
}
