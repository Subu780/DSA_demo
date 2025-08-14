#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number " << endl;
    int n;
    cin >> n;
    for (int a = 1; a <= n; ++a)
    {
        for (int b = 1; b <= n; ++b)
        {
            if (a == 1 || a == n)
            {
                cout << "*";
            }
            else if ((b == 1 || b == n) && (a!=1&&a!=n))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}