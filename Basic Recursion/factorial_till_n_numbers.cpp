#include <bits/stdc++.h>
using namespace std;

int product(int n,int p)
{
    
    if(n==0)
    return p;
    p = p*n;
    product(n-1,p);
}
int main()
{
    cout << "Enter a number " << endl;
    int inp;
    cin >> inp;
    cout << "The factorial of n number is: "<< product(inp,1) << endl;
}