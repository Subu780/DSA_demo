#include <bits/stdc++.h>
using namespace std;

int findgcd(int n1,int n2)
{
    for(int i=min(n1,n2);i>0;--i)
    {
            if(n1%i==0 && n2%i ==0)
            return i;
    }
    return 1;
}
int main()
{
    cout << "Enter numbers whom GCD/HCF u wanna find out" << endl;
    int inp1,inp2;
    cout << "Enter first number: " ;
    cin >> inp1;
    cout << "Enter second number: ";
    cin >> inp2;
    int gcd = findgcd(inp1,inp2);
    cout << "GCD / HCF of the numbers are: " << gcd << endl;
}