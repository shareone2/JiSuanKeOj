/*************************************************************************
	> File Name: T1048简单计算器.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月06日 星期六 18时33分23秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int a, b;
    char c;
    cin >> a >> b >> c;
    if (c == '+') {
        cout << a + b << endl;
    } else if (c == '-') {
        cout << a - b << endl;     
    } else if (c == '*') {
        cout << a * b << endl;
    } else if (c == '/') {
        if (b == 0) {
            cout << "Divided by zero!" << endl;
        } else {
            cout << a / b << endl;
        }   
    } else {
        cout << "Invalid operator!" << endl;
    }
    return 0;
}
