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

void solve(int tc)
{
    int n;
    cin >> n;
    vector<int> a(n), a1(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> a1[i];

    int l, r;
    for (l = 0; l < n; l++)
        if (a[l] != a1[l])
            break;

    for (r = n - 1; r > 0; r--)
        if (a[r] != a1[r])
            break;
    while (l > 0 && a1[l] >= a1[l - 1] && a1[l - 1] == a[l - 1])
        l--;
    while (r < n - 1 && a1[r] <= a1[r + 1] && a1[r + 1] == a[r + 1])
        r++;
    cout << l + 1 << " " << r + 1 << endl;
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
        solve(i);
    return 0;
}