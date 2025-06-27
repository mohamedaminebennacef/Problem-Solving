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

void solve(int tc)
{
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    if (m < n || m > 2 * n || a[0] != b[0])
    {
        cout << "NO\n";
        return;
    }
    vector<int> aa, bb;
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            aa.pb(cnt);
            cnt = 1;
        }
        else
            cnt++;
    }
    aa.pb(cnt);
    cnt = 1;
    for (int i = 1; i < m; i++)
    {
        if (b[i] != b[i - 1])
        {
            bb.pb(cnt);
            cnt = 1;
        }
        else 
            cnt++;
    }
    bb.pb(cnt);
    if (aa.size() != bb.size()) {
        cout << "NO\n";
        return;
    }
    for(int i = 0; i < aa.size(); i++) {
        if (aa[i] > bb[i] || bb[i] > 2 * aa[i] ) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

bool multi = true;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    if (multi)
        cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        solve(i);
    }
    return 0;
}