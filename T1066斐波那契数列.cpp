/*************************************************************************
	> File Name: T1066斐波那契数列.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 12时11分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int k, a[50] = {0};
    cin >> k;
    a[1] = 1;
    a[2] = 1;
    if (k <= 2) {
        cout << a[k];
    } else {
        for (int i = 3; i <= k; i++) {
            a[i] = a[i - 1] + a[i - 2];
        }
        cout << a[k] << endl;
    }
    return 0;
}
