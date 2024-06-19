#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long long reversed = 0;
        long long temp = x;

        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        return (reversed == x);
    }
int main(){
    
    int x = 1211;

    cout << "Check if the given number is palindrome: ";
    if(isPalindrome(x)){
        cout << "true";
    }
    else{
        cout << "false";
    }
}