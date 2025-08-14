#include <bits/stdc++.h>
using namespace std;

void printNumbers(int current, int n) {
    if (current > n)
        return;
    cout << current << endl;
    printNumbers(current + 1, n);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printNumbers(1, n);

    return 0;
}
