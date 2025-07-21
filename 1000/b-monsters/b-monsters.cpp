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

bool multi = true;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % k == 0)
            x = k;
        else
            x %= k;
        v.pb({x, i + 1});
    }

    auto comp = [&](pair<int, int> p1, pair<int, int> p2)
    {
        if (p1.F == p2.F)
            return p1.S < p2.S;
        return p1.F > p2.F;
    };
    sort(all(v), comp);

    for (int i = 0; i < n; i++)
        cout << v[i].S << " ";
    cout << endl;
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
        solve();
    return 0;
}