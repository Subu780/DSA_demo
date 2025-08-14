#include <bits/stdc++.h>
using namespace std;

// Function to calculate number of digits in two different ways
pair<int, int> checkdigits(int n)
{
    int e = 1;
    int num = n;

    while (n >= 10)  // Count digits by dividing
    {
        n /= 10;
        ++e;
    }

    int c = (int)(log10(num) + 1);  // Count digits using log10

    return {e, c};  // Return both results as a pair
}

int main()
{
    cout << "Enter a number: ";
    int inp;
    cin >> inp;

    // Get both digit counts from the function
    pair<int, int> res = checkdigits(inp);

    cout << "The number of digits (manual method): " << res.first << endl;
    cout << "The number of digits (logarithmic method): " << res.second << endl;

    return 0;
}
