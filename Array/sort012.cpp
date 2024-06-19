#include  <bits/stdc++.h>
#include <iostream>

//not working
using namespace std;

void sort012(vector<int>& arr, int n)
    {
        int i = 0, j = 0 ,k = n-1;
        while(j <= k){
            
            switch (arr[j]){
                case 0:
                   swap(arr[i++],arr[j++]);
                   break;
                case 1:
                    j++;
                    break;
                case 2:
                    swap(arr[j],arr[k--]);
                    break;
            }
        }
}

int main () {

    vector<int> arr {0, 1, 0, 2, 0, 2, 1};
    int n = arr.size();

    sort012(arr, n);

    cout << "The sorted array of 0, 1, 2 is: ";

    for (int i = 0; i < arr.size(); i++){
        cout<< " " << arr[i];
    }
    
    return 0;
    
}