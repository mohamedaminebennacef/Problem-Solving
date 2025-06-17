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

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        string a = s.substr(0, i + 1);
        char b = s[i + 1];
        string c = s.substr(i + 2, n - i - 2);
        if (c == "")
            break;
        string ac = a + c;
        if (count(all(ac), b))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}