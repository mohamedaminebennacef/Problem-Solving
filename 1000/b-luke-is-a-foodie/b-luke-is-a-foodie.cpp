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

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int changes = 0, lastsegmentl = a[0] - x, lastsegmentr = a[0] + x;
    for (int i = 1; i < n; i++)
    {
        int currsegmentl = a[i] - x, currsegmentr = a[i] + x;
        // no overlap
        int l = max(lastsegmentl,currsegmentl), r = min(lastsegmentr, currsegmentr);
        if (l > r)
        {
            changes++;
            lastsegmentl = currsegmentl;
            lastsegmentr = currsegmentr;
        }
        else {
            lastsegmentl = l;
            lastsegmentr = r;
        }
    }
    cout << changes << endl;
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