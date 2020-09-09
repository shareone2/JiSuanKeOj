/*************************************************************************
	> File Name: T1060整数的个数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月06日 星期六 18时27分09秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int a[105], n, cnt1 = 0, cnt5 = 0, cnt10 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) cnt1++;
        if (a[i] == 5) cnt5++;
        if (a[i] == 10) cnt10++;
    }
    cout << cnt1 << endl << cnt5 << endl << cnt10 << endl;
    return 0;
}
