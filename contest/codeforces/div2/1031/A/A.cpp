#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) a.begin(), a.end()
#define F first
#define S second
#define em emplace_back
#define mp make_pair
#define sz(a) (int)(a.size())

void solve()
{
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;
    auto f = [&](int k, int a, int b, int x, int y)
    {
        int ans = max((k - a + x) / x, 0);
        k -= max((k - a + x) / x, 0) * x;
        ans += max((k - b + y) / y, 0);
        return ans;
    };
    cout << max(f(k, a, b, x, y), f(k, b, a, y, x)) << endl;
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