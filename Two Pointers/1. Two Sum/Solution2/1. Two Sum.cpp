#include <bits/stdc++.h>
using namespace std;

    int n;
        // O(n^2)
    bool compare(pair<int,int> p1,pair<int,int> p2) {
        if (p1.first == p2.first) 
            return p1.second<p2.second;
        return p1.first<p2.first;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> inter;
        for(int i=0;i<n;i++) {
            inter.push_back({nums[i],i});
        }
        sort(inter.begin(),inter.end(),compare);
        int i=0,j=n-1;
        while(i<j) {
            if (inter[i].first+inter[j].first>target) 
                j--;
            else if (inter[i].first+inter[j].first<target) 
                i++;
            else 
                return {inter[i].second,inter[j].second};
        }
        return {};
    }

int main() {
    vector<int> nums = {2,1,5,3};
    n = nums.size();
    int target = 4; 
    vector<int> indices = twoSum(nums,target);
    for (auto indice:indices) cout << indice << " ";
    return 0;
}