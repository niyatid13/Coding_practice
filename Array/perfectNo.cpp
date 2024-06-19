#include <bits/stdc++.h>

using namespace std;

int main() {
    int num, sum = 0, div;

    cout << "Enter the number" << endl;
    cin >> num;

    //Here i donot start with 0 as other conditions won't work. 
    for (int i = 1; i < num; i++ ){
        div = num % i;
        if (div == 0){
            sum += i;
        }
    }

    if (sum == num){
        cout << "The given number is Perfect number.";
    }
    else {
        cout << "The given number is not a Perfect number.";
    }
    return 0;

}