#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans=0;
		int i=0,j=0;
		while (i<nums.size()-1 && !nums.empty()) {
			while (j<nums.size() && !nums.empty())
			{
                if (nums[i]+nums[j]==k) {
                    ans++;
                    nums.erase(nums.begin()+j);
                    nums.erase(nums.begin()+i);
					break;
                }
				j++;
			}
			i++;	
		}
        return ans;
    }
};	

int main() {
	Solution solution;
	vector<int> nums = {1,2,3,4};int k = 5;
	cout<<solution.maxOperations(nums,k);
}

/*
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int maxOperations(int* nums,int n, int k) {
        int count = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == -1) continue;
            for(int j = i + 1; j < n; j++){
                if(nums[j] == -1) continue;
                if(nums[i] + nums[j] == k){
                    count++;
                    nums[i] = -1;
                    nums[j] = -1;
                    break;
                }
            }
        }
        return count;
    }
};
int main() {
	Solution solution;
	int nums[] = {1,2,3,4};int k = 5;
    int n=sizeof(nums)/sizeof(nums[0]);
	cout<<solution.maxOperations(nums,n,k);
}
*/