#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& vec,int low,int high){
    int pivot = vec[low];
    int i = low;
    int j = high;
    while(j>i){
        while(vec[i]<=pivot && i <= high)
            i++;
        while(vec[j]>pivot && j>=low)
            j--;
        if(j>i)
            swap(vec[j],vec[i]);

    }
    swap(vec[low],vec[j]);
    return j;
}

void qs(vector<int>& vec,int low,int high){
    if(low<high){
    int pIndex = partition(vec,low,high);
    qs(vec,low,pIndex-1);
    qs(vec,pIndex+1,high);
    }
}

vector<int> quickSort(vector<int>& vec){
    qs(vec,0,vec.size()-1);
    return vec;
}

int main(){
    vector<int> vec = {5,9,1,2,6,9,4,7,8};
        quickSort(vec);
for(auto it: vec)
        cout << it << " ";
}