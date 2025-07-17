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

void solve()
{
    int n, k, cnt = 0;
    cin >> n >> k;
    vector<int> a(n);
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt += (a[i] % 2 == 0);
        if (a[i] % k == 0)
            check = 1;
    }
    if (check)
        cout << 0 << endl;
    else
    {
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = a[i]; j <= a[i] + k; j++)
            {
                if (j % k == 0)
                    ans = min(ans, j - a[i]);
            }
        }
        if (k == 1)
            cout << ans << endl;
        else
        {
            if (k == 2 || k == 3 || k == 5)
                cout << ans << endl;
            else
                cout << min(ans, max(0, 2 - cnt)) << endl;
        }
    }
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
    // #ifndef ONLINE_JUDGE
    // diff();
    // #endif
    return 0;
}