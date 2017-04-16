// Problem statement: https://www.hackerrank.com/challenges/staircase

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int spaces = n - 1;
    int hashes = 1;
    while (spaces >= 0) {
        for (int i = 0; i < spaces; ++i)
            cout << " ";
        for (int i = 0; i < hashes; ++i)
            cout << "#";
        cout << endl;
        --spaces;
        ++hashes;
    }
    return 0;
}

