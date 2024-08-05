#include <bits/stdc++.h>
using namespace std;

    // input array is already sorted

    int n;
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int start=0,end=n-1;
        while(start<end) {
            if (nums[start]+nums[end]>target) 
                end--;
            else if (nums[start]+nums[end]<target) 
                start++;
            else 
                return {start+1,end+1};
        }
        return {};
    }
int main() {
    // vector<int> nums = {2,1,5,3}; // not sorted
    vector<int> nums = {1,2,3,5}; 
    n = nums.size();
    int target = 4; 
    vector<int> indices = twoSum(nums,target);
    for (auto indice:indices) cout << indice << " ";
    return 0;
}