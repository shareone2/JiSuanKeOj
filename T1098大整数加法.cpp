/*************************************************************************
	> File Name: T1098大整数加法.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月06日 星期六 15时50分43秒
 ************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main () {
    char a1[205] = {0}, b1[205] = {0}, a[205] = {0}, b[205] = {0};                             
    cin >> a1 >> b1;
    int flog = 0, cnt = 0;
    for (int i = 0; a1[i] != '\0'; i++) {
        if (a1[i] != '0' || flog == 1) {
            a[cnt++] = a1[i];
            flog = 1;
        }
    }
    cnt = 0;
    flog = 0;
    for (int i = 0; b1[i] != '\0'; i++) {
        if (b1[i] != '0' || flog == 1) {
            b[cnt++] = b1[i];
            flog = 1;
        }
    }
    cnt = 0;
    int lena, lenb, len;
    lena = strlen(a);
    lenb = strlen(b);
    len = lena > lenb ? lena : lenb;
    int A[205] = {0}, B[205] = {0};
    for (int i = lena - 1; i >= 0; i--) {
        A[cnt++] = a[i] - '0';
    }
    cnt = 0;
    for (int i = lenb - 1; i >= 0; i--) {
        B[cnt++] = b[i] - '0';
    }
    for (int i = 0; i < len; i++) {
        B[i] = B[i] + A[i];
        if (B[i] > 9) {
            B[i + 1]++;
            B[i] = B[i] - 10;
        }
    }
    if (B[len] != 0) len++;
    int t = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (B[i] != 0) {
            t = 1;
            break;
        }   
    }
    if (t == 0) {
        cout << '0';
    } else {
        for (int i = len - 1; i >= 0; i--) {
            cout << B[i];
        }
    }
    cout << endl;
    return 0;
}
