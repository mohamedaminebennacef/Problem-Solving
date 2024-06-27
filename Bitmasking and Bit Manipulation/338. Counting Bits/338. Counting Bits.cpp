#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // vector<int> countBits(int n) {
    //     vector<int> ans(n+1);
    //     for(int i=0;i<=n;i++) 
    //         ans[i]=__builtin_popcount(i);
    //     return ans;
    // }
    // vector<int> countBits(int n) {
    //     vector<int> ans(n+1);
    //     for(int i=0;i<=n;i++) {
    //         int x=i;
    //         int r=0;
    //         while(x){
    //             r+=x%2;
    //             x/=2;
    //         }
    //         ans[i]=r;
    //     }
    //     return ans;
    // }
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);
        for (int i = 0; i <= n; ++i) 
            ans[i] = ans[i >> 1] + (i & 1);
         // ans[i] = ans[i / 2] +  (i % 2);
        return ans;
    }
};
int main() {
    Solution solution;
    vector<int> ans=solution.countBits(5);
    for(auto v:ans)
        cout<<v<<" ";
    return 0;
}