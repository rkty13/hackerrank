// Problem statement: https://www.hackerrank.com/challenges/solve-me-first

#include <iostream>

using namespace std;

int solveMeFirst(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;
    cin >> num1 >> num2;
    cout << solveMeFirst(num1, num2);
    return 0;
}
