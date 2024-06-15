#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minIncrementForUniqueSolution1(vector<int> nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int res=0;
        for(int i=1;i<n;i++) {
            if (nums[i-1] >= nums[i]) {
                res=res+1+nums[i-1]-nums[i];
                nums[i] = nums[i-1]+1;
            } 
        }
        return res;
    }
    int minIncrementForUniqueSolution2(vector<int>& nums) {
        // Create a vector to count the occurrences of each number
        vector<int> count(*max_element(nums.begin(), nums.end()) + nums.size() + 1, 0);
        // Count the occurrences of each number in the input array
        for(auto &num : nums) {
            count[num]++;
        }
        int n = count.size();
        int moves = 0;
        int i = 0;
        // Traverse the count vector to make each number unique
        while (n > 0) {
            if (count[i] >= 2) {
                // If the count of the current number is 2 or more, increment the next number
                moves += count[i] - 1;
                count[i + 1] += count[i] - 1;
            }
            i++;
            n--;
        }
        return moves;
    }
};
// tc->O(max_num+n), here n is size of the nums vector
// sc->O(max_num+n)

int main() {
    vector<int> nums = {100000,100000,100000};
    Solution solution;
    cout<<solution.minIncrementForUniqueSolution1(nums)<<"\n";
    cout<<solution.minIncrementForUniqueSolution2(nums)<<"\n";
    return 0;
}