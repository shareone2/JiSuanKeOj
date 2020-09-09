/*************************************************************************
	> File Name: T1030判断正负数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 10时33分28秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int a;
    cin >> a;
    if (a > 0) {
        cout << "positive" << endl;
    } else if (a == 0){
        cout << "zero" << endl;
    } else {
        cout << "negative" << endl;
    }
    return 0;
}
