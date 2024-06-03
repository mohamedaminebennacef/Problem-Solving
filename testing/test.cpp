#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void search(vector<vector<int>> &ans, vector<int> &perm, vector<int>& nums, int &n, vector<bool> &chosen)
    {
        // condition d'arret: wa9tech ne9ef 
        if (perm.size() == n)
        {
            ans.push_back(perm);
            return;
        }
        
        for (int i=0 ; i<n ; i++)
        {
            if (chosen[i]) // eli visited = true, manajmch nemchilha
                continue; // manajmch, nagez eli ba3dha
            
            chosen[i] = 1;
            perm.push_back(nums[i]);
            search(ans, perm, nums, n, chosen);
            chosen[i] = 0;
            perm.pop_back();
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> perm;
        int n = nums.size();
        vector<bool> chosen(n, 0);
        search(ans, perm, nums, n, chosen);
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = solution.permute(nums);
    
    for (const auto &perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}
