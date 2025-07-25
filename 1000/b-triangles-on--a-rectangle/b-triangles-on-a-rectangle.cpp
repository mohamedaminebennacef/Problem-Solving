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
#define int long long
bool multi = true;

void solve()
{
    int w, h;
    cin >> w >> h;
    int ans = 0;
    int k;
    cin >> k;
    vector<int> hx0(k);
    for (int i = 0; i < k; i++)
        cin >> hx0[i];
    cin >> k;
    vector<int> hxh(k);
    for (int i = 0; i < k; i++)
        cin >> hxh[i];
    cin >> k;
    vector<int> vy0(k);
    for (int i = 0; i < k; i++)
        cin >> vy0[i];
    cin >> k;
    vector<int> vyw(k);
    for (int i = 0; i < k; i++)
        cin >> vyw[i];
    int t1 = (hx0[hx0.size() - 1] - hx0[0]) * h;
    int t2 = (hxh[hxh.size() - 1] - hxh[0]) * h;
    int t3 = (vy0[vy0.size() - 1] - vy0[0]) * w;
    int t4 = (vyw[vyw.size() - 1] - vyw[0]) * w;
    ans = max(ans, max(max(t1, t2), max(t3, t4)));
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