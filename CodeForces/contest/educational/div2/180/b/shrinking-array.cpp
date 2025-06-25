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
    int n;
    cin >> n;
    vector<int> a(n), d(n - 1);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = -1;
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i - 1]) <= 1)
        {
            cout << 0 << endl;
            return;
        }
    }
    int dec = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
            dec++;
    }
    int inc = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] < a[i])
            inc++;
    }
    if (inc == n || dec == n)
    {
        cout << -1 << endl;
        return;
    }
    cout << 1 << endl;
}

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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