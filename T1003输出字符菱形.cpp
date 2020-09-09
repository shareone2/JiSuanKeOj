/*************************************************************************
	> File Name: T1003输出字符菱形.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月04日 星期四 18时50分07秒
 ************************************************************************/

#include<iostream>

using namespace std;

int main () {
    char a;
    cin >> a;
    cout << "  " << a << "  " << endl;
    cout << ' ' << a << a << a << ' ' << endl;
    cout << a << a << a << a << a << endl;
    cout << ' ' << a << a << a << ' ' << endl;
    cout << "  " << a << "  " << endl;
    return 0;
}
