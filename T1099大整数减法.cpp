/*************************************************************************
	> File Name: T1099大整数减法.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月06日 星期六 18时46分55秒
 ************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main () {
    char a[205] = {0}, b[205] = {0};
    cin >> a >> b;
    int lena, lenb, len;
    lena = strlen(a);
    lenb = strlen(b);
    int cnt = 0, A[205] = {0}, B[205] = {0};
    for (int i = lena - 1; i >= 0; i--) {
        A[cnt++] = a[i] - '0'; 
    }
    cnt = 0;
    for (int i = lenb - 1; i >= 0; i--) {
        B[cnt++] = b[i] - '0'; 
    }
    for (int i = 0; i < lena; i++) {
        if (A[i] - B[i] < 0) {
            A[i + 1]--;
            A[i] = A[i] + 10;
            A[i] = A[i] - B[i];
        } else {
            A[i] = A[i] - B[i];
        }
    }
    for (int i = lena - 1; i >= 0; i--) {
        cout << A[i];
    }
    cout << endl;
    return 0;
}
