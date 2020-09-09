/*************************************************************************
	> File Name: T1009等差数列末项计算.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月04日 星期四 19时52分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int a1, a2, n;
    cin >> a1 >> a2 >> n;
    cout << a1 + (n - 1) * (a2 - a1) << endl;
    return 0;
}
