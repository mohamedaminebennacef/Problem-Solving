//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
int dp[101];
// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        if (dp[n] != 0) return dp[n];
        if (n<=2) return 1;
        else
            dp[n] = nthFibonacci(n-1)+nthFibonacci(n-2);
        return dp[n];
    }
};

//{ Driver Code Starts.
int main() {
    int n = 10;
    Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    return 0;
}

// } Driver Code Ends