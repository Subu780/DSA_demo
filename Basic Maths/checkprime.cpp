#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    int cnt=0;
    for(int i=1;i<=n;++i)
    n%i==0?++cnt:cnt=cnt;
    if(cnt==2)
    return true;
    else
    return false;
}
int main()
{
    cout << "Enter a number: " << endl;
    int inp;
    cin >> inp;
    bool p = checkPrime(inp);
    p == true?cout <<"The number is prime":cout << "The number is not prime";
    return 0;
}

