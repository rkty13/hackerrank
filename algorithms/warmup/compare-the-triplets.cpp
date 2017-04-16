// Problem statement: https://www.hackerrank.com/challenges/compare-the-triplets

#include <iostream>

using namespace std;

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    int alice = 0;
    int bob = 0;
    if (a0 > b0) alice++;
    if (a1 > b1) alice++;
    if (a2 > b2) alice++;
    if (b0 > a0) bob++;
    if (b1 > a1) bob++;
    if (b2 > a2) bob++;
    cout << alice << " " << bob << endl;
    return 0;
}

