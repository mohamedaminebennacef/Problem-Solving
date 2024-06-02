#include <bits/stdc++.h>
using namespace std;

int dp[101][101];

int uniquePaths(int n,int m) {
    if (dp[m][n] != -1 ) return dp[m][n];
    if (n == 1 && m == 1) return 1;
    if (n == 0 || m == 0) return 0;
    dp[m][n] = uniquePaths(n-1,m)+uniquePaths(n,m-1);
    return dp[m][n];
}


int main() {
    memset(dp,-1,sizeof(dp));
    int n,m;
    cin >> n;
    cin >> m;
    cout << uniquePaths(n,m);

    return 0;
}