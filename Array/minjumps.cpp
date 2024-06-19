
#include <bits/stdc++.h>
using namespace std;

int max(int x, int y)
{
	return (x > y) ? x : y;
}


int minJumps(int arr[], int n){
        
        if(n == 1) return 0;
        if(arr[0] == 0) return -1;
        
        int des = 0;
        int pos = 0;
        int jump = 0;
        
        for(int i = 0; i < n-1; i++) {
            des = max(des, arr[i]+i);
            if(pos == i) {
                pos = des;
                jump++;
            }
            if(pos == i) return -1;
        }
        return jump;
    }


int main()
{
	int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
	int size = sizeof(arr) / sizeof(int);

	// Calling the minJumps function
    cout << "Minimum number of jumps to reach the end of the array is: ";
	cout << minJumps(arr, size);
	return 0;
}
