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
    int n;
    cin >> n;
    map<int, int> f;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        f[s]++;
    }
    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }
    if (f.size() == 1)
    {
        cout << n << " ";
        for (int i = 1; i <= n - 1; i++)
            cout << i << " ";
        cout << endl;
    }
    else
    {
        int cnt = 0;
        for (auto &[size, freq] : f)
        {
            if (freq == 1)
            {
                cout << -1 << endl;
                return;
            }
        }
        int indexcum = 0;
        for (auto &[size, freq] : f)
        {
            if (freq & 1)
            {
                cout << freq + indexcum << " ";
                for (int i = indexcum + 1; i < indexcum + freq; i++)
                    cout << i << " ";
            }
            else
            {
                for (int i = freq; i > 0; i--)
                    cout << i + indexcum << " ";
            }
            indexcum += freq;
        }
        cout << endl;
    }
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