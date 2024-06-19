#include <bits/stdc++.h>

using namespace std;
//Floyd's Tortoise and Hare (Cycle Detection) algorithm.


int duplicates(vector<int> &arr, int n){

    int slow = arr[0];
    int fast = arr[0];

//Phase 1 (Finding the Intersection Point): where fast and slow meet
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

//Phase 2 (Finding the Entrance to the Cycle): where fast and slow meet again.
    fast = arr[0];

    while(slow != fast){
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;

}

int main(){
    vector<int> arr {1, 2, 3, 4, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "The duplicate in the array is: ";

    cout << duplicates(arr, n);
}