#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
    if(n==1)
        return;
        for(int j = 0;j<=n-2;++j)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    bubbleSort(arr,n-1);
}
int main(){
    cout << "Enter the number of elements in array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elemnts one by one: " << endl;
    for(int i = 0;i < n;++i)
        cin >> arr[i];
    bubbleSort(arr,n);
    cout << "The Sorted array is: ";
    for(int i = 0;i < n;++i)
        cout << arr[i] << " ";
    return 0;
}