/*************************************************************************
	> File Name: T1096石头剪刀布.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 13时15分02秒
 ************************************************************************/

#include <iostream>

using namespace std;

int main () {
    int n, na, nb, a[105], b[105], cnt = 0;
    cin >> n >> na >> nb;
    for (int i = 0; i < na; i++) cin >> a[i];
    for (int i = 0; i < nb; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        int x = a[i % na] - b[i % nb];
        if (x == 0) continue;
        else if (x == -2 || x == -3 || x == 5) cnt++;
        else cnt--;
    }
    if (cnt == 0) cout << "draw" << endl;
    else if (cnt > 0) cout << 'A' << endl;
    else cout << 'B' << endl; 
    return 0;
}
