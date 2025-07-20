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
    string s;
    cin >> s;

    string a = string(1, s[0]), b = s.substr(1, n - 1);

    int dista = 1, distb = 0;

    int fa[26], fb[26];
    memset(fa, 0, sizeof(fa));
    memset(fb, 0, sizeof(fb));

    fa[a[0] - 'a'] = 1;
    for (int i = 0; i < b.length(); i++)
    {
        if (fb[b[i] - 'a'] == 0)
            distb++;
        fb[b[i] - 'a'] += 1;
    }

    int ans = dista + distb;

    for (int i = 1; i < n - 1; i++)
    {

        a += s[i];
        b = s.substr(i + 1, n - i);

        if (fa[s[i] - 'a'] == 0)
            dista++;

        fa[s[i] - 'a'] += 1;

        if (fb[s[i] - 'a'] > 0)
            fb[s[i] - 'a'] -= 1;

        if (fb[s[i] - 'a'] == 0)
            distb--;

        ans = max(ans, dista + distb);
    }
    cout << ans << endl;
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