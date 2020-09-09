/*************************************************************************
	> File Name: T1085与7无关的数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 14时24分21秒
 ************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int n, sum = 0;
    cin >> n;
    if (n == 0) {
        cout << '0' << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            if (i % 7 != 0) {
                if (i < 10) {
                    sum += pow(i, 2);
                } else {
                    if (i % 10 != 7 && i / 10 != 7) {
                        sum += pow(i, 2);
                    }
                }   
            }
        }
    }
    cout << sum << endl;
    return 0;
}
