#include <iostream>
using namespace std;
 int main ()
 {
    cout << "Enter a number" << endl;
    int n;
    cin >> n;
    for(int a=1;a<=n;++a)
    {
        for(int b=64+n;b>=65+n-a;--b)
        {
            cout<<(char)b<< " ";
        }
        cout << endl;
    }
 }