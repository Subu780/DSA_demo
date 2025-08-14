#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the number of elements in array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements one by one" << endl;
    for (int i=0 ;i < n;++i)
        cin >> arr[i];
    for(int i = 0; i < n-1;++i)
    {
        int j = i;
        while(j >= 0 && arr[j] > arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            j--;
        }
    }
    cout << "THE array is sorted order is :" << " ";
    for(int i =0;i < n;++i)
        cout << arr[i]<< " ";
}