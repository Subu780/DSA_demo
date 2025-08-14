#include <bits/stdc++.h>
using namespace std;

bool checkarmstrong(int n)
{
    int n1 = n;
    int arm = 0;
    int no = log10(n1) + 1;

    while(n1 > 0)
    {
        int ld = n1 % 10;
        arm += round(pow(ld, no)); // round to avoid precision error
        n1 /= 10;
    }

    return arm == n;
}

int main()
{
    cout << "Enter a number: ";
    int inp;
    cin >> inp;

    if(checkarmstrong(inp))
        cout << "The number is an Armstrong number" << endl;
    else
        cout << "The number is not an Armstrong number" << endl;
}
