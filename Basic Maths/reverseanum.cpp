#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int r=0,a;
    while(n>0)
    {
        a=n%10;
        r=r*10+a;
        n/=10;     
    }
    return r;
}
int main()
{
    cout << "Enter a number" << endl;
    int inp;
    cin >> inp;
    int rev = reverse(inp);
    cout << "Reverse of the number is: " << rev << endl;
}