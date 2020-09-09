/*************************************************************************
	> File Name: T1046判断闰年.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 14时46分47秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int year;
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << 'Y' << endl;
    } else {
        cout << 'N' << endl;
    }
    return 0;
}
