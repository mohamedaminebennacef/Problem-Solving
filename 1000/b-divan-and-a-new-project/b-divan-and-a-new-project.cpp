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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    vector<pair<int, int>> p;

    for (int i = 0; i < n; i++)
        p.pb({a[i], i + 1});

    sort(all(p), [&](pair<int, int> p1, pair<int, int> p2)
         { return p1.F >= p2.F; });

    vector<int> x(n);
    ll ans = 0, pos = 1, sign = 1;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && i != 0)
            pos++;
        x[p[i].S - 1] = pos * sign;
        ans += p[i].F * 2 * pos;
        sign *= -1;
    }

    cout << ans << endl;
    cout << 0 << " ";

    for (int i = 0; i < x.size(); i++)
        cout << x[i] << " ";
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