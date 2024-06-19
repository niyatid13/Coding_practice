#include <bits/stdc++.h>

using namespace std;

int maxSumarray(int arr[], int n){

    int maxsum = arr[0];
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];

        maxsum = max(maxsum, sum);

        if( sum < 0){
            sum = 0;
        }

    }

    return maxsum;
}

int main(){

    int arr[] = {-1,-2,-3,-4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "The maximum sum of the contigous sub-array is: ";
    cout << maxSumarray(arr, n);
}