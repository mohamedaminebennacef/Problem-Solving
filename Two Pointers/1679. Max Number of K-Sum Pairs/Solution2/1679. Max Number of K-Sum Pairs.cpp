#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int maxOperations(vector<int> nums, int k) {
        int count = 0;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j) {
            if (nums[i]+nums[j]==k) {
                i++;
                j--;
                count++;
            }
            else if (nums[i]+nums[j]>k)
                j--;
            else
                i++;
        }
        return count;
    }
};
int main() {
	Solution solution;
	vector<int> nums = {1,2,3,4};int k = 5;
	cout<<solution.maxOperations(nums,k);
}