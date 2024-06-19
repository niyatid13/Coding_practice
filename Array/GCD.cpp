#include <bits/stdc++.h>

using namespace std;

//recursive function declaration

int findGCD(int , int);

int main () {

    int first, second;

    cout << "Enter the first number" << endl;
    cin >> first;

    cout << "Enter the second number"<< endl;
    cin >> second;

    cout << "The Greatest Common divisor of the given numbers is: "<< findGCD(first, second) << endl;

    return 0;

}

int findGCD (int first, int second){
    
    if( first == 0){
        return second;
    }

    if(second == 0){
        return first;
    }

    if (first == second){
        return first;
    }

    else if( first > second){
        return findGCD(first - second, second);
    }
    else if (second > first){
        return findGCD(first, second - first);
    }
}