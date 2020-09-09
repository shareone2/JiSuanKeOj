/*************************************************************************
	> File Name: T1037判断一个数能否同时被3和5整除.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 10时38分02秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int a;
    cin >> a;
    if (a % 3 == 0 && a % 5 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
