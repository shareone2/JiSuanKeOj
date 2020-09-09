/*************************************************************************
	> File Name: T求出e的值.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 14时35分00秒
 ************************************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

int main () {
    double n, e = 1, base, t = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (base = 1; base <= i; base++) {
            t = t * base;
        }
        e = e + 1.0 / t;
        t = 1;
    }
    printf("%.10lf\n", e);
    return 0;
}
