/*************************************************************************
	> File Name: T1044最大数输出.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月07日 星期日 14时40分23秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int a, b, c, max;
    cin >> a >> b >> c;
    if (a > b) max = a;
    else max = b;
    if (max > c) cout << max << endl;
    else cout << c << endl;
    return 0;
}
