// Problem statement: https://www.hackerrank.com/challenges/mini-max-sum

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    long int total = a + b + c + d + e;
    cout << min(total - a, min(total - b, min(total - c, min(total - d, total - e))));
    cout << " ";
    cout << max(total - a, max(total - b, max(total - c, max(total - d, total - e))));
    cout << endl;
    return 0;
}
