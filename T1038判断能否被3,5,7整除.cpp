/*************************************************************************
	> File Name: T1038判断能否被3,5,7整除.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 11时00分51秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int a;
    cin >> a;
    if (a % 3 == 0 && a % 5 == 0 && a % 7 == 0) {
        cout << "3 5 7" << endl;
    } else if (a % 3 == 0 && a % 5 == 0) {
        cout << "3 5" << endl;
    } else if (a % 3 == 0 && a % 7 == 0) {
        cout << "3 7" << endl;
    } else if (a % 5 == 0 && a % 7 == 0) {
        cout << "5 7" << endl;
    } else if (a % 3 == 0) {
        cout << '3' << endl;
    } else if (a % 5 == 0) {
        cout << '5' << endl;
    } else if (a % 7 == 0) {
        cout << '7' << endl;
    } else {
        cout << 'n' << endl;
    }
    return 0;
}
