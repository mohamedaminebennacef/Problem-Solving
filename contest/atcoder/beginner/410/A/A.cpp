#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) a.begin(), a.end()
#define F first
#define S second
#define em emplace_back
#define mp make_pair
#define sz(a) (int)(a.size())
#define int long long

void solve()
{
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    cin >> k;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= k)
            ans++;
    }
    cout << ans << endl;
}

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif

    int t;
    t = 1 ;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}