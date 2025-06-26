#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) a.begin(), a.end()
#define F first
#define S second
#define em emplace_back
#define mp make_pair
#define sz(a) (int)(a.size())
#define int long long

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> x(q);
    for (int &i : x)
        cin >> i;
    vector<vector<int>> b(n);
    for (int i = 0; i < q; i++)
    {
        if (x[i] >= 1)
        {
            b[x[i]-1].pb(i + 1);
            cout << x[i] << " ";
        }
        else
        {
            int mn = INT_MAX;
            for (int c = 0; c < n; c++)
            {
                if (b[c].size() < mn)
                    mn = b[c].size();
            }
            for (int c = 0; c < n; c++)
            {
                if (b[c].size() == mn)
                {
                    b[c].pb(i + 1);
                    cout << c+1 << " ";
                    break;
                }
            }
        }
    }
    cout << endl;
}

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif

    int t;
    // cin >> t;
    t = 1;
    while (t--)
        solve();
    return 0;
}