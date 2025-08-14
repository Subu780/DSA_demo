#include <bits/stdc++.h>
using namespace std;

vector<int> print(int n)
{
    vector<int>vec;
    for(int i=1;i<=n;++i)
    {
        if(n%i==0)
        vec.push_back(i);
    }
    return vec;
}

int main()
{
    cout << "Enter a number to print its all divisors" << endl;
    int inp;
    cin >> inp;
    vector <int> v = print(inp);
    cout<<"The divisors are:" << endl;
    for(auto it : v)
    cout << it << ",";
}