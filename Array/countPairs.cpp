
#include <bits/stdc++.h>

using namespace std;


int getPairsCount(int arr[], int n, int k) {

    unordered_map<int,int>m;

    int ans = 0;

    for(int i=0;i<n;i++){

        int val = k-arr[i];

        if(m[val]){
            ans += m[val]; //check and count the occurence of the complement of current element 
        }

        m[arr[i]]++; //add the count of current element in map
    }
    return ans;
}

int main(){

    int arr[] = {1, 5, 7, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 6; //the sum of which pairs are to be found

    cout << "The Number of Pairs whose sum is eqal to given sum is: ";
    cout << getPairsCount(arr, n, k);
}