#include <bits/stdc++.h>

using namespace std;

bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        
        // Count the frequency of characters in string s
        for (auto x : s) {
            count[x]++;
        }
        
        // Decrement the frequency of characters in string t
        for (auto x : t) {
            count[x]--;
        }
        
        // Check if any character has non-zero frequency
        for (auto x : count) {
            if (x.second != 0) {
                return false;
            }
        }
        
        return true;
}

int main(){
    string s = "anagram";
    string t = "nagaram";

    cout << "Check if the given strings are anagram: ";
    if(isAnagram(s, t)){
        cout << "true";
    }
    else{
        cout << "false";
    }
}