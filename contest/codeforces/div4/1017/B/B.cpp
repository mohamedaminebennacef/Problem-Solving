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
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int l1 = 0, r1 = 0;
    while (m)
    {
        m--;
        if (r1 + 1 > r)
            l1--;
        else
            r1++;
    }
    cout << l1 << " " << r1 << endl;
}

bool multi = true;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
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