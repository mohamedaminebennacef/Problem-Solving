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

void solve(int t)
{
    cout << t << " ";
    int n, k;
    string s;
    cin >> n >> k >> s;
    int c0 = count(all(s), '0');
    int c1 = count(all(s), '1');
    // int mn = max(c0, c1) - n / 2;
    // int mx = c0 / 2 + c1 / 2;
    // cout << ((k >= mn && k <= mx) ? "YES" : "NO") << endl;
    int unpaired = (n - 2 * k)/2;
    cout << ((c0 >= unpaired && c1 >= unpaired) ? "YES" : "NO") << endl;
}

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
    return 0;
}