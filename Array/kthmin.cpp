#include <bits/stdc++.h>
#include <iostream>

using namespace std;
 int count (vector<int>& arr, int& mid) {
    int cnt = 0; // important to initialize count to zero otherwise returns the first element.
    for (int i= 0; i < arr.size(); i++ ){
        if (arr[i] <= mid){
            cnt++;
        }
    }
    return cnt;
 }

 int kthmin(vector<int> arr, int& k){
    int low = INT_MAX;
    int high = INT_MIN;

    for (int i = 0; i < arr.size(); i++){
        low = min(low, arr[i]);
        high = max(high, arr[i]);
    }

    while (low < high){
        int mid = low + (high - low)/2;

        if(count(arr, mid) < k){
            low = mid + 1;
        }
        else{
            high = mid;
        }

    }

    return low;
 }


int main() {

    vector<int> arr{ 1, 4, 5, 3, 19, 3 };
    int k;
   
    cout << "Enter to find kth smallest: ";
    cin >> k;

    cout << kthmin(arr, k);

    return 0;
}