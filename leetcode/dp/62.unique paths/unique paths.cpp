#include <bits/stdc++.h>
using namespace std;



int uniquePaths(int n,int m) {
    if (n == 1 && m == 1) return 1;
    if (n == 0 || m == 0) return 0;
    return uniquePaths(n-1,m)+uniquePaths(n,m-1);
}


int main() {
    int n,m;
    cin >> n;
    cin >> m;
    cout << uniquePaths(n,m);

    return 0;
}