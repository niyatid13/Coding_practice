// C++ code to implement the above idea

#include <bits/stdc++.h>
using namespace std;

// Function to print a substring str[low..high]
void printSubStr(string str, int low, int high)
{
    for (int i = low; i <= high; ++i)
        cout << str[i];
}

// Function to find the longest palindromic substring
int longestPalSubstr(string s)
{
    int n = s.length();
    int start = 0, end = 1;
    int low, hi;

    // Traverse the input string
    for (int i = 0; i < n; i++) {

        // Find longest palindromic substring of even size
        low = i - 1;
        hi = i;

        while (low >= 0 && hi < n && s[low] == s[hi]) {

            // Update maximum length and starting index
            if (hi - low + 1 > end) {
                start = low;
                end = hi - low + 1;
            }
            low--;
            hi++;
        }

        // Find longest palindromic substring of odd size
        low = i - 1;
        hi = i + 1;

        while (low >= 0 && hi < n && s[low] == s[hi]) {

            // Update maximum length and starting index
            if (hi - low + 1 > end) {
                start = low;
                end = hi - low + 1;
              
            }
            low--;
            hi++;
        }
    }

    // Print the longest palindromic substring
    cout << "Longest palindrome substring is: ";
    printSubStr(s, start, start + end - 1);

    // Return output length
    return end;
}


int main()
{
    string str = "forgeeksskeegfor";

    cout << "\nLength is: " << longestPalSubstr(str);
    return 0;
}


