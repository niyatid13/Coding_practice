#include <bits/stdc++.h>

using namespace std;

int mindiff(int arr[], int n, int k){
    if(n==1) return 0;

    sort(arr, arr + n);

    int maxi, mini; 
    int diff = arr[n-1] - arr[0]; //declare the max number as diff and then keep finding minimum diff.

    for(int i = 1; i < n; i++){

        if( arr[i] - k < 0) continue;

        maxi = max(arr[i] + k, arr[n - 1] - k);
        mini = min(arr[0] + k, arr[i] - k);

        diff = min(diff, maxi - mini);


    }
    return diff;
}

int main(){

    int arr[] = {1, 5, 8, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    

    cout << "The minimum difference between heights of towers is: ";

    cout<< mindiff(arr, n, k);
}