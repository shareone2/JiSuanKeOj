/*************************************************************************
	> File Name: T1023温度表达转化.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月04日 星期四 20时34分59秒
 ************************************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

int main () {
    double F;
    cin >> F;
    printf("%.5lf\n", 5 * (F - 32) / 9);
    return 0;
}
