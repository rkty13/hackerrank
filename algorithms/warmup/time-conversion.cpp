// Problem statement: https://www.hackerrank.com/challenges/time-conversion

#include <iostream>

using namespace std;

int main() {
    int hour, min, sec;
    char col, ap;

    cin >> hour >> col >> min >> col >> sec >> ap;
    
    if (ap == 'A') cout << '0' << hour % 12;
    else cout << hour % 12 + 12;
    cout << col;
    if (min < 10) cout << '0';
    cout << min << col;
    if (sec < 10) cout << '0';
    cout << sec << endl;
    return 0;
}
