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
#define int long long
#define endl "\n"
int a[500005];

bool multi = true;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> a;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> ai(m);
        for (int j = 0; j < m; j++)
            cin >> ai[j];
        a.pb(ai);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a[i].size(); j++)
            sort(all(a[i]));
    }
    int ans = 0, vss = INT_MAX, minall = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minall = min(minall, a[i][0]);
        vss = min(vss, a[i][1]);
        ans += a[i][1];
    }
    cout << ans - vss + minall << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    if (multi)
        cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}