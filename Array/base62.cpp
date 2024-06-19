#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string convertToBase62(int number) {
    const string base62Chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    unordered_map<int, char> base62Map;

    // Populate the base62Map with characters and their corresponding indices
    for (int i = 0; i < base62Chars.length(); i++) {
        base62Map[i] = base62Chars[i];
    }

    string result = "";

    // Handle the case when the input number is 0
    if (number == 0) {
        result = "0";
    }

    // Convert the number to base-62
    while (number > 0) {
        int remainder = number % 62;
        result = base62Map[remainder] + result;
        number /= 62;
    }

    return result;
}

int main() {
    int inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;

    string base62String = convertToBase62(inputNumber);

    cout << "Base-62 Representation: " << base62String << endl;

    return 0;
}
