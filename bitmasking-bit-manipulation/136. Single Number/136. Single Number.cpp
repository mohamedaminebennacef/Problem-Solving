#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // int singleNumber(vector<int>& nums) {
    //     int n=nums.size();
    //     map<int,int> freq;
    //     for(int i=0;i<n;i++) {
    //         freq[nums[i]]++;
    //     }
    //     for(int i=0;i<n;i++){
    //         if(freq[nums[i]] == 1)
    //             return nums[i];
    //     }
    //     return -1;
    // }
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            x^=nums[i];
        }
        return x;
        
    }
};
int main() {
    vector<int> nums={4,1,2,1,2};
    Solution solution;
    cout<<solution.singleNumber(nums);
    return 0;
}