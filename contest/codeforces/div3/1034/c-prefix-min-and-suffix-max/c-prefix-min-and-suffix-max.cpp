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
    int n;
    cin >> n;
    vector<int> a(n + 1), pre(n + 1,INT_MAX), suf(n + 2);
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        pre[i] = min(pre[i - 1],a[i]);
    }
    for (int i = n; i >= 0; i--)
        suf[i] = max(suf[i + 1],a[i]);
    for (int i = 1; i <= n; i++) {
        if (a[i] == pre[i] || a[i] == suf[i])
            cout << '1';
        else
            cout << '0';
    }
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
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}