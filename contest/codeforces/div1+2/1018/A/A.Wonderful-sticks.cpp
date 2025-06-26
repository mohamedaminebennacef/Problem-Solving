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

bool multi = true;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    if (multi)
        cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> sticks(n + 1, 0);
        vector<int> ans(n,-1);
        int l = 1, r = sticks.size()-1, c = n - 1;
        for (int i = 1; i <= n; i++)
            sticks[i] = i;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '>')
            {
                ans[c] = sticks[r];
                r--;
            }
            else
            {
                ans[c] = sticks[l];
                l++;
            }
            c--;
        }
        for (int i = 1; i < sticks.size(); i++)
        {
            if (find(all(ans), sticks[i]) == ans.end())
                ans[c] = sticks[i];
        }
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}