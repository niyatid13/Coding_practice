#include <bits/stdc++.h>

using namespace std;

int main() {

  int num, reverse = 0, rem;
  cout << "Enter a number: "<< endl;
  cin >> num;

  do {
    rem = num % 10;
    reverse = reverse * 10 + rem;
    num = num / 10;
  } while ( num != 0);

  cout << "The reverse of the given number is : " << reverse << endl;

  return 0;
}