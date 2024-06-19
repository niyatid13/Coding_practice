#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void rearrange(int arr[], int n){
    int low = 0, high = n-1;

    while (low < high){
        if(arr[low] < 0){
            low++;
        }
        else if (arr[high] > 0){
            high--;
        }
        else {
            swap(arr[low], arr[high]);
        }
    }
}

int main(){
    int arr[] = {1, 2,  -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2,  1};
    int n = sizeof(arr)/sizeof(arr[0]);

    rearrange(arr, n); 
    cout<<"The sorted negative elements of the array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
    
}