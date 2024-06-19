#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // for std::swap

using namespace std;

// Template function to partition the container
template <typename T>
int partition(T& container, int low, int high) {
    auto pivot = container[high]; // Pivot element
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (container[j] < pivot) {
            ++i;
            std::swap(container[i], container[j]);
        }
    }
    std::swap(container[i + 1], container[high]);
    return i + 1;
}

// Template function for quicksort
template <typename T>
void quicksort(T& container, int low, int high) {
    if (low < high) {
        int pi = partition(container, low, high);

        // Recursively sort elements before
        // partition and after partition
        quicksort(container, low, pi - 1);
        quicksort(container, pi + 1, high);
    }
}

// Template function to sort any container with indexing and size() method
template <typename T>
void sortContainer(T& container) {
    if (container.size() <= 1) return; // No need to sort
    quicksort(container, 0, container.size() - 1);
}

int main() {
    // Example with vector
    vector<int> arr = {3, 6, 8, 10, 1, 2, 1};

    cout << "Original array: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    sortContainer(arr);

    cout << "Sorted array: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    // Example with string
    string str = "quicksort";

    cout << "Original string: " << str << endl;

    sortContainer(str);

    cout << "Sorted string: " << str << endl;

    return 0;
}
