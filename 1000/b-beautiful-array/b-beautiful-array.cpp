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

void solve(int tc)
{
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    if (s < k * b || s > ((k * b) + (k - 1) * (n)))
        cout << -1 << endl;
    else
    {
        ll sum = k * b, i;
        string st;
        for (i = 0; i < n - 1; i++)
        {
            cout << min(s - sum, k - 1) << " ";
            st += to_string(min(s - sum, k - 1)) + " ";
            sum += k - 1;
            if (s - sum < 0)
                break;
        }
        if (s - sum > 0)
            cout << k * b + s - sum << endl;
        else
        {
            for (int j = i + 1; j < n - 1; j++)
                cout << 0 << " ";
            cout << k * b << endl;
        }
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
    for (int i = 0; i < t; i++)
        solve(i + 1);
    return 0;
}