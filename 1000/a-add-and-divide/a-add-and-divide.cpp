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
    int a, b, cnt = 0;
    cin >> a >> b;
    if (a == b)
    {
        cout << 2 << endl;
        return;
    }
    if (b > a)
    {
        cout << 1 << endl;
        return;
    }
    if (b == 1)
    {
        cnt++;
        b++;
    }
    int mn = INT_MAX, cnt2 = cnt;
    for (int i = 0; i <= 5; i++)
    {
        int x = a;
        while (x != 0)
        {
            x = x / (b + i);
            cnt2++;
        }
        mn = min(mn, cnt2 + i);
        cnt2 = cnt;
    }
    cout << mn << endl;
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