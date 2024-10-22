#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0,ws=0,n=nums.size(),zero=0;
        while (r<n) {
            if (nums[r]==0)
                zero++;
            while (zero>1) {
                if (nums[l]==0)
                    zero--;
                l++;
            }
            ws=max(ws,r-l+1-zero);
            r++;
        }
        return ws;
    }
};
int main() {
    Solution solution;
    vector<int> nums={1,1,0,1};
    cout<<solution.longestSubarray(nums);
}