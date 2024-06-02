#include <bits/stdc++.h>
using namespace std;

int f(int n,int m,int dp[101][101]) {
if (dp[m][n] != -1 ) return dp[m][n];
    if (n == 1 && m == 1) return 1;
    if (n == 0 || m == 0) return 0;
    dp[m][n] = f(n-1,m,dp)+f(n,m-1,dp);
    return dp[m][n];
}



int uniquePaths(int n,int m) {
    int dp[101][101];
    memset(dp,-1,sizeof(dp));
    return f(n,m,dp);
}


int main() {
    int n,m;
    cin >> n;
    cin >> m;
    cout << uniquePaths(n,m);

    return 0;
}