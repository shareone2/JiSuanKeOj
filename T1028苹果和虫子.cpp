/*************************************************************************
	> File Name: T1028苹果和虫子.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 10时43分58秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int n, x, y;
    cin >> n >> x >> y;
    if (y % x == 0) {
        cout << n - y / x << endl;
    } else {
        cout << n - y / x - 1 << endl;
    }
    return 0;
}
