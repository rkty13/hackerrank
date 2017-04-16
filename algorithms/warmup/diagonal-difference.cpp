// Problem statement: https://www.hackerrank.com/challenges/diagonal-difference

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector< vector<int> > a(n, vector<int>(n));
    for (int a_i = 0; a_i < n; a_i++) {
        for (int a_j = 0; a_j < n; a_j++) {
            cin >> a[a_i][a_j];
        }
    }
    int main = 0;
    int second = 0;
    for (size_t i = 0; i < a.size(); ++i) {
        main += a[i][i];
        second += a[i][a.size() - 1 - i];
    }
    cout << abs(main - second) << endl;
    return 0;
}
