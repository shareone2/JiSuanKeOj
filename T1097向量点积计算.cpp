/*************************************************************************
	> File Name: T1097向量点积计算.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 12时05分23秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int n, a[1005] = {0}, b[1005] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        b[i] = a[i] * b[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += b[i];
    }
    cout << sum << endl;
    return 0;
}
