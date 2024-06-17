// *** Problem Understanding ***
// The problem is to determine if it is possible to rotate a collection of n angles (given in degrees) such that their cumulative sum modulo 360 is zero. In other words, you need to find if there exists a combination of these angles, each of which can be added or subtracted, that makes the total sum a multiple of 360.

// *** Solution Explanation ***
// The solution uses a bitmask approach to explore all possible ways to add or subtract the given angles.
#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    // freopen("input.txt","r",stdin);
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) 
        cin>>v[i];
    // Complexity O(2^n*n) = O(2^n)
    for(int i=0;i<(1<<n);i++) { // 2^n Generating All Combinations
        int ans=0;
        // For each combination represented by i, the inner loop iterates through each angle v[j] and checks whether to add or subtract the angle:
        for(int j=0;j<n;j++) {
            int bitmask=1<<j;
            int cal=i&bitmask;
            if (cal==0) 
                ans+=v[n-j-1];
            else    
                ans-=v[n-j-1];
        }
        if(ans%360==0){
            cout<<"YES";
            return 0;
        }// This exhaustive search is feasible due to the constraints (with n up to 15, 2^n is at most 32768 combinations to check). 
    }
    cout<<"NO";
    return 0;
}