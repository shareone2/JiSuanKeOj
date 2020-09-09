/*************************************************************************
	> File Name: T1034整数比较大小.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 10时51分31秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int x, y;
    cin >> x >> y;
    if (x > y) {
        cout << '>' << endl;
    } else if (x == y) {
        cout << '=' << endl;
    } else {
        cout << '<' << endl;
    }
    return 0;
}
