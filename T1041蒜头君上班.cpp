/*************************************************************************
	> File Name: T1041蒜头军上班.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月05日 星期五 11时48分11秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    double m;
    cin >> m;
    double bike, walk;
    bike = m / 3 + 50;
    walk = m / 1.2;
    if (walk == bike) {
        cout << "All" << endl;
    } else if (bike < walk) {
        cout << "Bike" << endl;
    } else if (bike > walk){
        cout << "Walk" << endl;
    }
    return 0;
}
