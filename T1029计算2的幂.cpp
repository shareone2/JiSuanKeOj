/*************************************************************************
	> File Name: T1029计算2的幂.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 08时06分16秒
 ************************************************************************/

#include <iostream>

using namespace std;

int main () {
    long long n, base = 2, ans = 1;
    cin >> n;
    while (n > 0) {
        if (n & 1) {
            ans *= base;
        }
        base *= base;
        n >>= 1;
    }
    cout << ans << endl;
    return 0;
}
