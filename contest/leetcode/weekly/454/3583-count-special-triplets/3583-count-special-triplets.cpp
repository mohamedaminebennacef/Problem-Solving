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
int a[500005];

const int MOD = 1e9 + 7;
int specialTriplets(vector<int> &nums)
{
    int n = nums.size();
    ll result = 0;
    unordered_map<int, int> r, l;
    for (int val : nums)
    {
        r[val]++;
    }

    for (int j = 0; j < n; ++j)
    {
        ll mid = nums[j];
        r[mid]--;
        ll left = l[2 * mid];
        ll right = r[2 * mid];
        result += left * right;
        l[mid]++;
    }

    return result % MOD;
}
signed main()
{
    vector<int> nums = {4, 5, 4, 2, 4};
    cout << specialTriplets(nums) << endl;
    return 0;
}