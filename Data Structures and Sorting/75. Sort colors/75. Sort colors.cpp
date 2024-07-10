#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // void sortColors(vector<int>& nums) {
    //     map<int,int> freq(0,3);
    //     for(int i=0;i<nums.size();i++) {
    //         freq[nums[i]]++;
    //     }
    //     int x = 0;
    //     for(int i=0;i<nums.size();i++) {
    //         for(int j=i;j<freq[x];j++) {
    //             nums[i]
    //         }
    //     }
    // }
    void sortColors2(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if (nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
    void sortColors3(vector<int>& nums) {
        int zeros = 0, ones = 0, n = nums.size();
        for(int num : nums) {
            if(num == 0) zeros++;
            else if(num == 1) ones++;
        }  

        for(int i = 0; i < zeros; ++i) {
            nums[i] = 0;
        }

        for(int i = zeros; i < zeros + ones; ++i) {
            nums[i] = 1;
        }

        for(int i = zeros + ones; i < n; ++i) {
            nums[i] = 2;
        }
    }
};


int main() {

    return 0;
}