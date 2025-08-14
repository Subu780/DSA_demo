#include <bits/stdc++.h>
using namespace std;

int sum(int n,int s)
{
    
    if(n==0)
    return s;
    s = s + n;
    sum(n-1,s);
}
int main()
{
    cout << "Enter a number " << endl;
    int inp;
    cin >> inp;
    cout << "The sum of n number is: "<< sum(inp,0) << endl;
}