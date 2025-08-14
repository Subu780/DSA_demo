#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the number of elements in the array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements one by one" << endl;
    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    for(int i = n - 1; i > 0; --i)
    {
        for(int j = 0; j <= i - 1; ++j)
        {
            if(arr[j+1] > arr[j])
                swap(arr[j+1], arr[j]);
        }
    }

    cout << "Sorted array:" << endl;
    for(int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
