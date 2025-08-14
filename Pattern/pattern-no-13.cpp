#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number" << endl;
    int n;
    cin >> n;
    for(int a=1,c=1;a<=n;++a)
    {
        for(int b=1;b<=a;++b,++c)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}