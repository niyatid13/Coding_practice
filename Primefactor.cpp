#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int N) {
    if (N <= 1) return false;
    if (N <= 3) return true;
    if (N % 2 == 0 || N % 3 == 0) return false;
    for (int i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2) == 0) return false;
    }
    return true;
}

// Function to find the lowest prime factor of a number
int lowestPrimeFactor(int N) {
    if (N <= 1) return -1; // Special case handling for non-positive numbers
    if (N % 2 == 0) return 2;
    if (N % 3 == 0) return 3;
    for (int i = 5; i * i <= N; i += 6) {
        if (N % i == 0) return i;
        if (N % (i + 2) == 0) return i + 2;
    }
    return N; // If no factor found, N itself is prime
}

int main() {
    int N;
    cin >> N;

    if (isPrime(N)) {
        cout << 1 << endl;
    } else {
        cout << lowestPrimeFactor(N) << endl;
    }

    return 0;
}
