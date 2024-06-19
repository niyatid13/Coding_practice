#include <bits/stdc++.h>
using namespace std;
 
 long long trappingWater(int arr[], int n){
         if(n<=2) return 0;
        
        int maxleft = INT_MIN;
        int maxright = INT_MIN;
        long long ans = 0;
        int low = 0;
        int high = n-1;
        
        while(low<=high){
            if(arr[low]<=arr[high]){
                if(arr[low]>=maxleft) maxleft = arr[low];
                else ans+= maxleft - arr[low];
                low++;
            }
            
            else{
                if(arr[high]>=maxright) maxright=arr[high];
                else ans+= maxright - arr[high];
                high--;
            }
        }
        return ans;
        
     
        // code here
    }

int main()
{
    int arr[] = {3,0,0,2,0,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "The rain water trapped is: " << trappingWater(arr, n);
    
    return 0;
}
