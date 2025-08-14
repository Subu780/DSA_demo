#include <bits/stdc++.h>
using namespace std;

bool reverse(int n)
{
    int r=0,a;
    int n1 = n;
    while(n>0)
    {
        a=n%10;
        r=r*10+a;
        n/=10;     
    }
    if(n1==r)
    return true;
    else
    return false;
}
int main()
{
    cout << "Enter a number" << endl;
    int inp;
    cin >> inp;
    bool pal = reverse(inp);
    if(pal==true)
    cout << "The Number is pallindrome" << endl;
    else
    cout << "The Number is not pallindrome" << endl;

}