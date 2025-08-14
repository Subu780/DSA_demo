#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter the number of elements in array: ";
    int n;
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
        mpp[arr[i]]++;
    
    pair<int, int> maxFreq = {arr[0], mpp[arr[0]]};
    pair<int, int> minFreq = {arr[0], mpp[arr[0]]};
    
    for (auto& p : mpp) {
        if (p.second > maxFreq.second) {
            maxFreq = {p.first, p.second};
        }
        if (p.second < minFreq.second) {
            minFreq = {p.first, p.second};
        }
    }
    
    cout << "Element with max frequency: " << maxFreq.first 
         << " (frequency: " << maxFreq.second << ")" << endl;
    cout << "Element with min frequency: " << minFreq.first 
         << " (frequency: " << minFreq.second << ")" << endl;
    
    return 0;
}