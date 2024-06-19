#include <vector>
#include <iostream>
using namespace std;



vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3) {
        vector<int> result;
        int i = 0, j = 0, k = 0;

        while (i < n1 && j < n2 && k < n3) {
            // If x = y and y = z, print any of them and move ahead in all arrays
            if (A[i] == B[j] && B[j] == C[k]) {
                result.push_back(A[i]);
                i++;
                j++;
                k++;
                // Skip duplicates
                while (i < n1 && A[i] == A[i-1]) i++;
                while (j < n2 && B[j] == B[j-1]) j++;
                while (k < n3 && C[k] == C[k-1]) k++;
            }
            // If x < y, move ahead in first array
            else if (A[i] < B[j])
                i++;
            // If y < z, move ahead in second array
            else if (B[j] < C[k])
                j++;
            // If z is smallest, move ahead in third array
            else
                k++;
        }
        
        return result;
}


int main() {
    
    int A[] = {1, 5, 10, 20, 40, 80};
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = 6, n2 = 5, n3 = 8;

    vector<int> result = commonElements(A, B, C, n1, n2, n3);

    cout << "The common elements in 3 sorted array is: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
