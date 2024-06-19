#include <bits/stdc++.h>

using namespace std;

vector<int> nextPermutation(vector<int>& arr){

    int n = arr.size(); //for vector size() is used
    
    // Step 1: Find the break point:
    int ind = -1; //break point
    
    for(int i = n-2; i >=0 ; i--){
        if(arr[i] < arr[i + 1]){
            ind = i; // index i is the break point
            break;
        }   
    }
    // If break point does not exist:
    if(ind == -1){
        reverse(arr.begin(), arr.end());
    }
     // Step 2: Find the next greater element
    //         and swap it with arr[ind]:
    for(int i = n-1; i > ind; i--){
        if(arr[i] > arr[ind]){
            swap(arr[i], arr[ind]);
            break;
        }
    }
    // Step 3: reverse the right half:
    reverse(arr.begin() + ind + 1, arr.end());

    return arr;
}

int main(){
    vector<int> arr {2, 1, 5, 4, 3, 0, 0};

    vector<int> ans = nextPermutation(arr);

    cout << "The next Permutation of the given array is: ";

    for(auto it: ans){
        cout << it << " ";
    }

    return 0;
}