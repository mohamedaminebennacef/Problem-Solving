#include <bits/stdc++.h>
using namespace std;
    int n;
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++) 
            hash[nums[i]]=i; // value:index
        for(int i=0;i<nums.size();i++) {
            int complement=target-nums[i];
            if (hash.find(complement)!=hash.end() && hash[complement]!=i) // you may not use the same element twice
                return {i,hash[complement]};
        }
        return {};
    }

int main() {
    vector<int> nums = {2,1,5,3};
    n = nums.size();
    int target = 4; 
    vector<int> indices = twoSum(nums,target);
    for (auto indice:indices) cout << indice << " ";
    return 0;
}