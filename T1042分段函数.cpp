/*************************************************************************
	> File Name: T1042分段函数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月06日 星期六 14时40分33秒
 ************************************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

int main () {
    double x;
    cin >> x;
    if (x >= 0 && x < 5) {
        printf("%.3lf\n", -1 * x + 2.5);
    } else if (x >= 5 && x < 10) {
        printf("%.3lf\n", 2.0 - 1.5 * (x - 3) * (x - 3));
    } else {
        printf("%.3lf\n", x / 2.0 - 1.5);
    }
    return 0;
}
