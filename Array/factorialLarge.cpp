#include <bits/stdc++.h>
using namespace std;


    vector<int> factorial(int N) {
        vector<int> ans;
        ans.push_back(1);  // Initialize factorial with 1
        int carry = 0;     // Initialize carry

        for (int i = 2; i <= N; ++i) {
            // Multiply current factorial result by i
            for (int j = 0; j < ans.size(); j++) {
                int x = ans[j] * i + carry;
                ans[j] = x % 10;  // Store the last digit of x in ans
                carry = x / 10;   // Update carry with remaining digits
            }

            // Process remaining carry
            while (carry) {
                ans.push_back(carry % 10);
                carry = carry / 10;
            }
        }

        // Reverse the result to get the correct order
        reverse(ans.begin(), ans.end());
        return ans;
    }


// Example usage
int main() {
    
    cout << "Enter the number to find factorial: ";
    int N;
    cin >> N;
    vector<int> res = factorial(N);
    
    cout << "The factorial of the given number is: ";

    for (int digit : res) {
        cout << digit;
    }
    cout << endl;
    return 0;
}
