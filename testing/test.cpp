#include <bits/stdc++.h>

using namespace std;


int main() {

    int m[3][3] = {
        {1,2,3},
        {5,6,7},
        {8,9,10}
    };
    int n = 3;
    for (int i=0;i<n;i++) {
            cout << m[i][n-i-1] << ",";
    }
    return 0;
}