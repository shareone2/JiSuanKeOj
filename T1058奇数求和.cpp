/*************************************************************************
	> File Name: T1058奇数求和.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月07日 星期日 14时37分21秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int m, n, sum = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
