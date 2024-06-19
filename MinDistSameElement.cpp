#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int minDistance(vector<int>& arr) {
	int min_dist = INT_MAX;
	for (int i = 0; i < arr.size(); i++) {
		for (int j = i+1; j < arr.size(); j++) {
			if (arr[i] == arr[j]) {
				min_dist = min(min_dist, j - i);
			}
		}
	}
	return min_dist == INT_MAX ? -1 : min_dist;
}

int main() {
	vector<int> arr1 = { 1, 2, 3, 2, 1 }; 
	cout << minDistance(arr1) << endl; // Output: 3
	vector<int> arr2 = { 3, 5, 4, 6, 5, 3 };
	cout << minDistance(arr2) << endl; // Output: 3
	vector<int> arr3 = { 1, 2, 1, 4, 1 }; 
	cout << minDistance(arr3) << endl; // Output: 3
	return 0;
}
