/*************************************************************************
	> File Name: T1079开关灯.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 08时25分28秒
 ************************************************************************/

#include <iostream>

using namespace std;

int main () {
    int N, M, deng[5001] = {0};
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= N; j++) {
            if (j % i == 0) {
                if (deng[j] == 0) {
                    deng[j] = 1;
                } else {
                    deng[j] = 0;
                }
            }
        }
    }
    int d = 0;
    for (int j = 1; j <= N; j++) {
        if (deng[j] == 1) {
            if (d == 0) {
                cout << j;
                d = 1;
            } else {
                cout << ',' << j;
            }
        }
    }
    cout << endl;
    return 0;
}
