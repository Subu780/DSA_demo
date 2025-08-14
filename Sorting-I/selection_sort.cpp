#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the number of elements in array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements one by one" << endl;
    for (int i = 0;i < n ;++i)
        cin >> arr[i];
    for(int i = 0;i <= n-2;++i)
    {
        int min = i;
        for(int j = i+1;j <= n-1; ++j)
        {
            if(arr[j] < arr[min])
            min = j;
        }
        swap(arr[min],arr[i]);
        
    }
    cout << "The sorted array is: ";
    for (int i = 0;i < n; ++i)
    cout << arr[i] << " ";
}