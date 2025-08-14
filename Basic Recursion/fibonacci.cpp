#include <bits/stdc++.h>
using namespace std;

void fibonnaci(int n,int p,int p1,int cnt)
{
    if(cnt>=n+1)
    return;
    int num;
    num = p + p1;
    cout << num << " ";
    fibonnaci(n,num,p,cnt+1);
}

int main()
{
    cout << "enter a number" << endl;
    int inp;
    cin >> inp;
    cout << "0 ";
    fibonnaci(inp,0,1,1);
}

