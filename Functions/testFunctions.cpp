#include <bits/stdc++.h>
using namespace std;

int max(int x, int y)
{
	return (x > y) ? x : y;
}

int min(int x, int y)
{
	return (x < y) ? x : y;
}

template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}


void reverseArray(int arr[], int n) {
    
    int left = 0;
    int right = n - 1;
    while (left < right) {
        // Swap the elements
        auto temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        // Move the pointers
        left++;
        right--;
    }
}

template <typename T>
void reverseContainer(T& container) {
    int left = 0;
    int right = container.size() - 1;
    while (left < right) {
        // Swap the elements
        auto temp = container[left];
        container[left] = container[right];
        container[right] = temp;
        // Move the pointers
        left++;
        right--;
    }
}

int main()
{
	int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
	int size = sizeof(arr) / sizeof(int);

	// Calling the minJumps function
    cout << "Minimum number of jumps to reach the end of the array is: ";
	//cout << min(arr[5], arr[1]);

    reverseArray(arr, size);

    for (int val : arr) {
        cout << val << " ";
    }
	return 0;
}