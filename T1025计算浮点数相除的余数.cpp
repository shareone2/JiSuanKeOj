/*************************************************************************
	> File Name: T1025计算浮点数相除的余数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月04日 星期四 20时55分53秒
 ************************************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

int main () {
    double a, b, r;
    int k;
    cin >> a >> b;
    k = a / b;
    r = a - k * b;
    printf("%g\n", r);
    return 0;
}
