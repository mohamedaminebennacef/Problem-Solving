#include <bits/stdc++.h>
using namespace std;

void search(vector<int> &subset, vector<int> nums, int n, int idx, int &ans)
{
    if (idx == n)
    {
        if (subset.size() >= 1)
        {
            int xsub = subset[0];
            for (int i = 1; i < subset.size(); i++)
                xsub ^= subset[i];
            ans += xsub;
        }
    }
    else
    {
        // Generate subset with nums[i]
        subset.push_back(nums[idx]);           // Include k
        search(subset, nums, n, idx + 1, ans); // Exclude k
        subset.pop_back();                     // Backtrack
        // Generate susbsets without nums[i]
        search(subset, nums, n, idx + 1, ans); // Move to the next element
    }
}

int main()
{
    vector<int> nums = {1, 3};
    int n = nums.size(), ans = 0;
    vector<int> subset;
    search(subset, nums, n, 0, ans);
    cout << ans << endl;
    return 0;
}
