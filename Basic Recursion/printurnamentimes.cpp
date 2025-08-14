#include <bits/stdc++.h>
using namespace std;
void print(int count,int n)
{
    if(count>n)
    return;
    cout << "Shubham" << endl;
    print(count+1,n);
}
int main()
{
    cout << "Enter a number" << endl;
    int inp;
    cin >> inp;
    print(1,inp);
}