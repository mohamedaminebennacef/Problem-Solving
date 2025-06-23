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

void solve()
{
    int a, x, y;
    cin >> a >> x >> y;
    for (int pos = 2; pos <= 100; pos++)
    {
        if (abs(pos - x) < abs(a - x) && abs(pos - y) < abs(a - y))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

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
        solve();
    }
    return 0;
}