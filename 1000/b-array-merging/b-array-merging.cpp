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

void max_subarray(map<int, int> &fa, vector<int> a)
{
    int cnt = 1;
    int i;
    for (i = 1; i < a.size(); i++)
    {
        if (a[i - 1] == a[i])
            cnt++;
        else
        {
            fa[a[i - 1]] = max(fa[a[i - 1]], cnt);
            cnt = 1;
        }
    }
    fa[a[i - 1]] = max(fa[a[i - 1]], cnt);
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    map<int, int> fa;
    map<int, int> fb;

    max_subarray(fa, a);
    max_subarray(fb, b);

    int ans = 0;
    for (auto [element, occ] : fa)
        ans = max(ans, occ + fb[element]);
    for (auto [element, occ] : fb)
        if (!fa.count(element))
            ans = max(ans, occ);

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