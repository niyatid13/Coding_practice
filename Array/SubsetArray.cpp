#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    
    // {1,3,3,7,7,11,13,21}
    
    // {1,3,7,7,11}
    
    
    if(n<m) {
        return "No";
    }
    sort(a1,a1+n);
    sort(a2,a2+m);
    int flag=0;
    for(int i=0;i<n;i++) {
        if(a1[i]==a2[flag]) {
            flag+=1;
        }
        if(flag==m) {
            return "Yes";
        }
    }
    return "No";
}

int main()
{
    int a1[] = { 2, 30, 15, 10, 8, 25, 80 };
    int a2[] = { 2, 30, 15, 10, 80 };

    int n = sizeof(a1) / sizeof(a1[0]);
    int m = sizeof(a2) / sizeof(a2[0]);
    
    cout << "Is subset of array 1 = " << isSubset(a1, a2, n, m);
    return 0;
}