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

bool multi = false;

void solve(int tc)
{
    int n, q, c;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<int, int> colors;
    for (int i = 0; i < n; i++)
        if (colors.find(a[i]) == colors.end())
            colors[a[i]] = i + 1;
    while (q--)
    {
        cin >> c;
        int posc = colors[c];
        cout << posc << " ";
        for (auto &[color, index] : colors)
        {
            if (index < posc)
                index++;
        }
        colors[c] = 1;
    }
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
    for (int i = 1; i <= t; i++)
        solve(i);
    return 0;
}