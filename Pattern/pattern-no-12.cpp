#include <iostream>
using namespace std;




int main()
{
    cout << "Enter a number" << endl;
    int n;
    cin >> n;
    for(int a=1;a<=n;++a)
    {
        for(int b=1;b<=a;++b)
        {
            cout  << b;
        }
        for(int c=2*(n-a);c>0;--c)
        {
            cout<<" ";
        }
        for(int d=1;d<=a;++d)
        {
            cout  << d;
        }
        cout << endl;
    }
}