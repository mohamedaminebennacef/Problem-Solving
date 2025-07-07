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

bool multi = true;

int bs(int val, vector<int> p, int success)
{
    int m = p.size();
    int l = 0, r = m - 1, mid;
    while (l < r)
    {
        mid = l + (r - l) / 2;
        if (1ll * val * p[mid] < success)
            l = mid - 1;
        else if (1ll * val * p[mid] >= success)
            r = mid + 1;
    }
    return mid;
};
vector<int> successfulPairs(vector<int> &s, vector<int> &p, long long success)
{
    int n = s.size();
    int m = p.size();
    vector<int> ans;
    sort(all(p));
    for (int i = 0; i < n; i++)
    {
        int val = s[i];
        int idx = bs(val, p, success);
        int nb = m - idx;
        ans.push_back(nb);
    }
    return ans;
}

int main()
{
    vector<int> spells = {1, 2, 3, 4, 5, 6, 7}, potions = {1, 2, 3, 4, 5, 6, 7};
    // vector<int> spells = {3,1,2}, potions = {8,5,8};
    vector<int> res = successfulPairs(spells, potions, 25);
    for (auto i : res)
        cout << i << " ";
    cout << endl;
    return 0;
}