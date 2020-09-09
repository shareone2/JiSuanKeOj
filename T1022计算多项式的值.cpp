/*************************************************************************
	> File Name: T1022计算多项式的值.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月04日 星期四 20时30分17秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main () {
    double x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;
    printf("%.7lf\n", a * pow(x, 3) + b * pow(x, 2) + c * x + d);
    return 0;
}
