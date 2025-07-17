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
#define int long long
// int a[500005];

bool multi = true;

int cnk(int n, int k)
{
    if (k < 0 || k > n)
        return 0;
    if (k > n - k)
        k = n - k;
    int res = 1;
    for (int i = 1; i <= k; ++i)
    {
        res *= n - (k - i);
        res /= i;
    }
    return res;
}

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> v(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] = v[i] <= q;
    }
    v.push_back(0);
    int ans = 0;
    int s = 0, e = -1, l;
    for (int i = 0; i <= n; i++)
    {
        if (v[i] == 0)
        {
            l = e - s + 1;
            if (l >= k)
            {
                ans += cnk(l - k + 2, l - k);
            }
            s = i + 1;
            e = i - 1;
        }
        e++;
    }
    cout << ans << endl;
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