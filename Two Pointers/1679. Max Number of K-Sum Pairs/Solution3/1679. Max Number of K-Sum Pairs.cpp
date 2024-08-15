#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            int res = k - nums[i];
            if(map.find(res) != map.end()){
                count++;
                if(map[res] == 1) map.erase(res);
                else map[res]--;
            }
            else{
                // Mimicking getOrDefault behavior
                if(map.find(nums[i]) != map.end()) {
                    map[nums[i]]++;
                } else {
                    map[nums[i]] = 1;
                }
            }
        }
        return count;
    }
};  
int main() {
	Solution solution;
	vector<int> nums = {3,1,3,4,3};int k = 6;
	cout<<solution.maxOperations(nums,k);
}