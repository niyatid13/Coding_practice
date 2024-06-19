#include <bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n) {
        unordered_map<int, int> mpp;
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            
            // If sum is zero, we found a subarray with zero sum
            if (sum == 0) {
                return true;
            }
            
            // If sum is already in the map, it means we have a zero-sum subarray
            if (mpp.find(sum) != mpp.end()) {
                return true;
            }
            
            // Add sum to the map
            mpp[sum] = i;
        }
        
        return false;  // No zero-sum subarray found
}

int main(){

    int arr[] = {4,2,-3,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);


    cout << "The sum of sub-array is equal to zero: ";
    
    if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	
	return 0;
}

