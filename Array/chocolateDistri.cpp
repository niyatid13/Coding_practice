#include <bits/stdc++.h>
using namespace std;


long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
        
       long long int mini = INT_MAX; 
       int i = 0; 
       int j = m-1; 
       while(j < n){
           long long int diff = a[j]- a[i]; 
           mini = min(mini , diff); 
           i++, j++; 
       }
       return mini;
}  

int main()
{
    vector<long long> arr = {3, 4, 1, 9, 56, 7, 9, 12};
    long long n = arr.size();
    long long m = 5;
    
    cout << "minimum difference between maximum chocolates and minimum chocolates given to students is: " << findMinDiff(arr, n, m);
    
    return 0;
}
