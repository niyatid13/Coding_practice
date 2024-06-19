#include <bits/stdc++.h>
using namespace std;

 int findLongestConseqSubseq(int arr[], int N)
    {
       int maxi=INT_MIN;
        int end = arr[0];
        int count=1;
        sort(arr,arr+N);
        for(int i=0;i<N;i++) {
            int temp = end+1;
            if(arr[i]==temp) {
                count++;
            }
            else if(arr[i]!=end) {
                count=1;
            }
            end = arr[i];
            maxi = max(maxi,count);
        }
        return maxi;
    }

int main(){

    int arr[] = {2, 6, 1, 9, 4, 5, 3};
    int n = sizeof(arr)/sizeof(arr[0]);


    cout << "The length of the longest consecutive subsequence of an array is: ";
    cout << findLongestConseqSubseq(arr, n);
}