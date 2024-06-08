#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindowv1(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> msw;
        for(int i = 0; i <= n - k; i++) { 
            int vmax = -1e8;
            for (int j = i; j < i + k; j++) 
                vmax = max(vmax,nums[j]);
                msw.push_back(vmax);
        }
        return msw;
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int> s;
        int n = nums.size();
        for(int i=0;i<k;i++) {
            s.insert(nums[i]);
        }
        vector<int> ans;
        ans.push_back(*s.rbegin());

        int i = 0;
        int j = k;

        while (j<n) {
            s.erase(s.find(nums[i]));
            s.insert(nums[j]);
            ans.push_back(*s.rbegin());
            i++;
            j++;
        }
        return ans;
    }

};

int main() {
    vector<int> nums = {1,3,-1,-3,5,3,6,7},msw;
    int k = 3;
    Solution solution;
    msw = solution.maxSlidingWindow(nums, k);
    for(auto c:msw)
        cout << c << ",";
    return 0;
}
