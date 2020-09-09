/*************************************************************************
	> File Name: T1027大象喝水.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 07时59分43秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#define PI 3.14159

using namespace std;

int main () {
    double h, r;
    cin >> h >> r;
    int n;
    n = 20 / (PI * pow(r, 2) * h / 1000);
    cout << n + 1 << endl;
    return 0;
}
