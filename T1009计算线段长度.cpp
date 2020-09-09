/*************************************************************************
	> File Name: T1009计算线段长度.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月04日 星期四 19时42分53秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main () {
    double a, b, c, d;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    printf("%.3lf\n", sqrt(pow((a - c), 2) + pow((b - d), 2)));
    return 0;
}
