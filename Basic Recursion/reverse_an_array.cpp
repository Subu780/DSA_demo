#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int rev[], int n, int cnt)
{
    if (cnt == n)
    {
        for (int i = 0; i < n; i++)
            cout << rev[i] << " ";
        return;
    }
    rev[n - cnt - 1] = arr[cnt];
    reverseArray(arr, rev, n, cnt + 1);
}

int main()
{
    cout << "Enter a number" << endl;
    int inp;
    cin >> inp;
    int a[inp], rev[inp];
    for (int i = 0; i < inp; i++)
        a[i] = i + 1;
    reverseArray(a, rev, inp, 0);
}
