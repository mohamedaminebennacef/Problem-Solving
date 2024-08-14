#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int maxOperations(vector<int> nums, int k) {
        int count = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] == -1) continue;
        //     for(int j = i + 1; j < nums.size(); j++){
        //         if(nums[j] == -1) continue;
        //         if(nums[i] + nums[j] == k){
        //             count++;
        //             nums[i] = -1;
        //             nums[j] = -1;
        //             break;
        //         }
        //     }
        // }
        vector<bool> used(nums.size(),false);
        for(int i = 0; i < nums.size(); i++){
            if(used[i]) continue;
            for(int j = i + 1; j < nums.size(); j++){
                if(used[j]) continue;
                if(nums[i] + nums[j] == k){
                    count++;
                    used[i] = true;
                    used[j] = true;
                    break;
                }
            }
        }
        return count;
    }
};
int main() {
	Solution solution;
	vector<int> nums = {1,2,3,4};int k = 5;
	cout<<solution.maxOperations(nums,k);
}