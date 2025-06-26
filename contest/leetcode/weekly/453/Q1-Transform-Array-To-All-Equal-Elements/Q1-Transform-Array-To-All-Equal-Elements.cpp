#include <bits/stdc++.h>
using namespace std;

bool canMakeEqual(vector<int> &nums, int k)
{
    map<int, int> f;
    for (auto e : nums) f[e]++;
    int ans = 0;
    for (auto e : f)
    {
        if (e.second % 2 == 1)
            ans++;
    }
    if (nums.size() % 2 == 0 && ans == 2 || ans == 0) return false;
    if (ans != 1)
    {
        int cnt = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] != nums[i + 1]) cnt++;
            if (cnt == 2) return false;
        }
    }
    return true;
}
int main() {
    vector<int> nums = {1,-1,1,-1,1};
    int k = 3;
    cout<<canMakeEqual(nums,k);
}