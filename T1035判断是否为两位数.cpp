/*************************************************************************
	> File Name: T1035判断是否为两位数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 09时57分37秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int a;
    cin >> a;
    if ((a / 10) >= 1 && (a / 10) <= 9) {
        cout << '1' << endl;
    } else {
        cout << '0' << endl;
    }
    return 0;
}
