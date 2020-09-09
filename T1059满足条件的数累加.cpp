/*************************************************************************
	> File Name: T1059满足条件的数累加.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月06日 星期六 18时43分38秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int m, n, sum = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        if (i % 17 == 0) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
