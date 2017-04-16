// Problem statement: https://www.hackerrank.com/challenges/plus-minus

#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       cin >> arr[arr_i];
    }
    int pos = 0;
    int neg = 0;
    int zer = 0;
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] < 0) ++neg;
        else if (arr[i] > 0) ++pos;
        else ++zer;
    }
    cout << (float) pos / n << endl;
    cout << (float) neg / n << endl;
    cout << (float) zer / n << endl;
    return 0;
}

