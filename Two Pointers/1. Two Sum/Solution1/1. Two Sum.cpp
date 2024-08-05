#include <bits/stdc++.h>
using namespace std;

    vector<int> indices; // the two numbers and we only have exactly one solution
    int n;
        // O(n^2)
    vector<int> twoSum(vector<int>& nums,int target) {
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if (nums[i]+nums[j] == target) {
                    indices.push_back(i);
                    indices.push_back(j);
                    return indices;
                }
            }
        }
    }

int main() {
    vector<int> nums = {2,1,5,3};
    n = nums.size();
    int target = 4; 
    indices = twoSum(nums,target);
    for (auto indice:indices) cout << indice << " ";
    return 0;
}