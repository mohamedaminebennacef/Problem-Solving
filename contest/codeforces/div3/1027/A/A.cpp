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
    int n;
    cin >> n;
    if (sqrt(n) == int(sqrt(n)))
        cout << 0 << " " << sqrt(n) << endl;
    else
        cout << -1 << endl;
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