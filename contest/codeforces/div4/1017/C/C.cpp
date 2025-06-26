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
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> v[i][j];
    vector<int> perm(2 * n + 1, 0);
    perm[0] = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (find(all(perm), v[i][j]) == perm.end())
                perm[i + j + 2] = v[i][j];
        }
    }
    for (int i = 1; i <= 2 * n; i++)
    {
        if (find(all(perm), i) == perm.end())
        {
            perm[find(all(perm), 0) - perm.begin()] = i;
        }
    }
    for (int i = 1; i < 2 * n + 1; i++)
        cout << perm[i] << " ";
    cout << endl;
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
        // cout << endl;
    }
    return 0;
}