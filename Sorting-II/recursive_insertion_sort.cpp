#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    if (n <= 1)
        return;
    insertionSort(arr, n - 1);
    
    int j = n - 1;
    while (j > 0 && arr[j] < arr[j - 1]) {
        swap(arr[j], arr[j - 1]);
        j--;
    }

    insertionSort(arr, n - 1);
}

int main() {
    int arr[] = {5, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);

    cout << "The sorted array is: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}
