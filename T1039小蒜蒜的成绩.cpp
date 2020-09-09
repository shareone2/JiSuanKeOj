/*************************************************************************
	> File Name: T1039小蒜蒜的成绩.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 11时12分57秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int a, b;
    cin >> a >> b;
    if ((a < 60 && b >= 60) || (a >= 60 && b < 60)) {
        cout << '1' << endl;
    } else {
        cout << '0' << endl;
    }
    return 0;
}
