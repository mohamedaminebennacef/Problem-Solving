#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
int f(vector<int> nums, int k, int target)
{
    int n = nums.size();
    int op = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] != target)
        {
            op++;
            nums[i] *= -1;
            nums[i + 1] *= -1;
        }
        if (op == k)
            break;
    }
    return op <= k && count(all(nums),target) == n;
}
bool canMakeEqual(vector<int> &nums, int k)
{
    return f(nums, k, 1) || f(nums, k, -1);
}
int main()
{
    vector<int> nums = {1, -1, 1, -1,1};
    int k = 3;
    cout << canMakeEqual(nums, k) << endl;
}