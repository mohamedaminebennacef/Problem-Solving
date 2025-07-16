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

int prime(int n)
{
    if (n < 2)
        return false;
    for (int d = 2; d * d <= n; d++)
    {
        if (n % d == 0)
            return false;
    }
    return true;
}

void solve()
{
    int d;
    cin >> d;
    int p = d + 1;
    while (!prime(p))
        p++;
    int q = p + d;
    while (!prime(q))
        q++;
    cout << min(p * p * p, p * q) << endl;
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