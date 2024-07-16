#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int, int> mp;
        for(auto i : nums)
        mp[i]++;
        for(auto it = mp.begin(); it!=mp.end(); ++it)
        {
            while(it->second>0)
            {
                int temp = it->first;
                for(int i = temp; i < temp+k; ++i)
                {
                    if(mp[i]==0)
                    return false;
                    mp[i]--;
                }
            }
        }
        return true;
    }
};


int main() {
    vector<int> nums = {3,2,1,2,3,4,3,4,5,9,10,11};
    int k = 3;
    Solution solution;
    cout << solution.isPossibleDivide(nums,k);
    return 0;
}