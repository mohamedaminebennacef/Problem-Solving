#include <bits/stdc++.h>
using namespace std;

vector<int> indices(2);
int n;

 vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numMap; // valuer : indice
        int complement;
        for(int i=0;i<=n;i++) {
            complement = target-nums[i]; 
            if (numMap.find(complement) != numMap.end()) {
                indices[0] = numMap[complement];
                indices[1] = i;
                return indices;
            }
            numMap[nums[i]] = i;
        }
        return indices;
}

int main() {
    vector<int> nums = {2,1,5,3};
    n = nums.size();
    int target = 4;
    indices = twoSum(nums,target);
    cout << "[";
    for (auto indice:indices) {
        cout << indice << " ";
    }
    cout << "]";

    return 0;
}
