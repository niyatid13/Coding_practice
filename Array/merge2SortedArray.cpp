#include <bits/stdc++.h>

using namespace std;

void merge(long long arr1[], long long arr2[], int m, int n){

    int left = m - 1;
    int right = 0;

    while( left >= 0 && right < n){
        if( arr1[left] > arr2[right]){
            swap( arr1[left], arr2[right]);
            left--, right++;
        }
        else{
            break;
        }
    }

    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);
}



void printArray(long long arr[], int n){

    for(int i = 0; i < n; i++ ){
        cout << arr[i] << " ";
    }
}

int main(){

    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    cout << "The given array to merge are: " << endl;
    printArray(arr1, m); cout<<endl;
    printArray(arr2, n); cout<<endl;

    merge(arr1, arr2, m, n);

    cout << "The merged array are: " << endl;
    printArray(arr1, m); cout<<endl;
    printArray(arr2, n); cout<<endl;

    return 0;

}