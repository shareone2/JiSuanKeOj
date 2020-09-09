/*************************************************************************
	> File Name: T1049苹果和虫子2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月06日 星期六 14时49分03秒
 ************************************************************************/


#include<iostream>
using namespace std;
int main () {
    int n, x, y;
    cin >> n >> x >> y;
    if (y % x == 0) {
        if (n - y / x < 0) {
            cout << '0' << endl;
        } else {
            cout << n - y / x << endl;
        }   
    } else {
        if (n - y / x - 1 < 0) {
            cout << '0' << endl;
        } else {
            cout << n - y / x - 1 << endl;
        }      
    }
    return 0;
}
