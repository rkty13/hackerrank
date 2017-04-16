// Problem statement: https://www.hackerrank.com/challenges/birthday-cake-candles

#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> height(n);
    for (int height_i = 0; height_i < n; height_i++) {
        cin >> height[height_i];
    }

    int maxHeight = 0;
    int occurances = 0;

    for (size_t i = 0; i < height.size(); ++i) {
        if (height[i] > maxHeight) {
            maxHeight = height[i];
            occurances = 1;
        } else if (height[i] == maxHeight) {
            ++occurances;
        }
    } 
    cout << occurances << endl;
    return 0;
}

