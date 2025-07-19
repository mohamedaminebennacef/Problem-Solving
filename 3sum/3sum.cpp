#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) a.begin(), a.end()
#define F first
#define S second
#define em emplace_back
#define mp make_pair
#define sz(a) (int)(a.size())
#define rall(x) (x).rbegin(), (x).rend()
using ll = long long;
#define endl "\n"
// int a[500005];

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    sort(all(nums));
    vector<vector<int>> res;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i - 1] == nums[i])
            continue;
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            if (nums[i] + nums[l] + nums[r] < 0)
                l++;
            else if (nums[i] + nums[l] + nums[r] > 0)
                r--;
            else
            {
                res.push_back({nums[i], nums[l], nums[r]});
                l++;
                while (l < r && nums[l - 1] == nums[l])
                    l++;
                r--;
                while (l < r && nums[r + 1] == nums[r])
                    r--;
            }
        }
    }
    return res;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 0};
    vector<vector<int>> res = threeSum(nums);
    // for (int i = 0; i < res.size(); i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //         cout << res[i][j] << " ";
    //     cout << endl;
    // }
}