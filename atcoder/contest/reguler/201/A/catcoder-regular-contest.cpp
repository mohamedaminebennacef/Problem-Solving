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
#define int long long
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
        int n;
        cin >> n;
        int d11 = 0, d21 = 0, d12 = 0, d22 = 0;
        for (int i = 0; i < n; i++)
        {
            int h, m, e;
            cin >> h >> m >> e;
            h = min(h, m), e = min(e, m);
            if (m >= h + e)
            // Maximize div1
            {
                d11 += h;
                d12 += e;
                d21 += h;
                d22 += e;
            }
            // Maximize div2
            else
            {
                d11 += h;
                d12 += m - h;
                d21 += m - e;
                d22 += e;
            }
        }
        cout << min(min((d11 + d12) / 2, d11), d22) << endl;
    }
    return 0;
}