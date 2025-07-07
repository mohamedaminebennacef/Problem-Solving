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
    vector<int> a(n);
    int check = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b = a;
    sort(all(b));
    if (b == a)
    {
        cout << "NO\n";
        return;
    }
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            res.push_back(a[i]);
        }
    }
    cout << "YES\n" << res.size() << "\n";
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
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
    while (t--)
    {
        solve();
    }
    return 0;
}