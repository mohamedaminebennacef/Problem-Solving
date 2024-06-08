#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int prefixMod = 0;
        unordered_map<int, int> modSeen;
        modSeen[0] = -1;

        for (int i = 0; i < nums.size(); i++) {
            prefixMod = (prefixMod + nums[i]) % k;

            if (modSeen.find(prefixMod) != modSeen.end()) {
                // ensures that the size of subarray is atleast 2
                if (i - modSeen[prefixMod] > 1) {
                    return 1;
                }
            } else {
                // mark the value of prefixMod with the current index.
                modSeen[prefixMod] = i;
            }
        }

        return 0;
    }
};

int main() {
    vector<int> nums = {23,2,6,4,7};
    int k = 13;
    Solution solution;
    cout << solution.checkSubarraySum(nums,k);
    return 0;
}