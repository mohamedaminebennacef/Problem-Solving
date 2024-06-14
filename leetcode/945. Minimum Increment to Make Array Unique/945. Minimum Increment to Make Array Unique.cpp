// #include <bits/stdc++.h>
// using namespace std;

// int get_indice(vector<int> v,int value) {
//     if (find(v.begin(),v.end(),value) != v.end()) {
//         return find(v.begin(),v.end(),value)-v.begin();
//     }
//     return -1;
// }

// int main() {
//     vector<int> nums = {3,2,1,2,1,7};
//     int n = nums.size();
//     sort(nums.begin(),nums.end());
//     for(auto v:nums) cout<<v;
//     for(int i=0;i<n-1;i++) {
//         if (nums[i] == nums[i+1]) {
//             nums
//         }
//     }
    

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                ans += nums[i-1]-nums[i]+1;
                nums[i]= nums[i-1]+1;
            }
        }
        return ans;
        }
};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // map<int,int> freq;
    // for(int i=0;i<n;i++){
    //     if (freq.find(nums[i]) != freq.end())
    //         freq[nums[i]]++;
    //     else
    //         freq[nums[i]]=1;
    // }
    // for(map<int,int>::iterator it=freq.begin();it!=freq.end();++it) {
    //     if(it->second>1) {
    //         int indice = get_indice(nums,it->first);
    //         while () {
    //             nums[indice]++;
    //             it->second--;
    //         }
    //     }
    // }
    return 0;
}