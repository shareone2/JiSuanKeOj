/*************************************************************************
	> File Name: T1045三角形判断.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月07日 星期日 14时45分43秒
 ************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a, b, c, ma, he;
    cin >> a >> b >> c;
    ma = max(a, max(b, c));
    he = a + b + c;
    if (ma < he - ma) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}

