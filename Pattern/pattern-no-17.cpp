#include <iostream>
using namespace std;

int main(){
    cout<< "Enter a number" << endl;
    int n;
    cin >> n;
    for(int a=1;a<=n;++a)
    {
        for(int b=n;b>a;--b)
        {
            cout << " ";
        }
        for(int c=65;c<65+a;++c)
        {
            cout << (char)c;
        }
        for(int d=63+a;d>=65;--d)
        {
            cout << (char)d;
        }
    cout << endl;
    }
}