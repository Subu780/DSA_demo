#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number" << endl;
    int n;
    cin >> n;
    for (int a = 1; a <= n; ++a)
    {
        for (int b = 1; b <= a; ++b)
        {
            if ((a+b)%2==0)
            {
                cout << "1 ";
            }
            else 
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}