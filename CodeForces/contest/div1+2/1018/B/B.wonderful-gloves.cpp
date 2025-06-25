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
        int n, k;
        cin >> n >> k;
        vector<int> l(n), r(n);
        for (int i = 0; i < n; i++)
            cin >> l[i];
        for (int i = 0; i < n; i++)
            cin >> r[i];
        long long m = k - 1, y = 0;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            y += max(l[i], r[i]);
            b.pb(min(l[i], r[i]));
        }
        sort(all(b), greater<int>());
        long long mb = 0;
        for (int i = 0; i < m; i++)
            mb += b[i];
        cout << y + mb + 1 << endl;
    }
    return 0;
}