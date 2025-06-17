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

void solve()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int ans = abs(min(s - a[0], a[n - 1] - s));
    for (int i = 0; i < n - 1; i++)
        ans += a[i + 1] - a[i];
    cout << ans << endl;
}

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}