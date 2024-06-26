#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            int n=nums.size();
            vector<vector<int>> ans;
            // each mask represents a subset
            for(int mask=0;mask<(1<<n);mask++) {
                vector<int> subset;
                for(int bit=0;bit<n;bit++) {
                    if((1<<bit)&mask)
                        subset.push_back(nums[bit]);
                }
                ans.push_back(subset);
            }
            return ans;
        }
};
int main() {
    vector<int> nums={1,2,3};
    Solution solution;
    vector<vector<int>> subsets=solution.subsets(nums);
    for(auto sub:subsets) {
        for(auto v:sub){
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}