// Problem statement: https://www.hackerrank.com/challenges/simple-array-sum

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
    
    int total = 0;
    for (int i : arr) {
        total += i;
    }
    cout << total << endl;
    return 0;
}
