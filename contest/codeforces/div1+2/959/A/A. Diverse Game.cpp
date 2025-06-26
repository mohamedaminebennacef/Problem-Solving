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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        if (n == m && n == 1)
            cout << "-1\n";
        else
        {
            if (n == 1 && m % 2 == 1)
            {
                if (m != 2)
                    swap(a[0][0], a[0][m / 2]);
                for (int j = m - 1; j >= 0; j--)
                    cout << a[0][j] << " ";
                cout << endl;
            }
            else if (m == 1 && n % 2 == 1)
            {
                if (n != 2)
                    swap(a[0][0], a[n / 2][0]);
                for (int i = n - 1; i >= 0; i--)
                    cout << a[i][0] << endl;
            }
            else
            {
                for (int i = n-1; i >=0; i--)
                {
                    if (a[0].size() % 2 == 1 && a[0].size() != 1)
                        swap(a[i][0], a[i][m / 2]);
                    for (int j = m - 1; j >= 0; j--)
                        cout << a[i][j] << " ";
                    cout << endl;
                }
            }
        }
    }
    return 0;
}