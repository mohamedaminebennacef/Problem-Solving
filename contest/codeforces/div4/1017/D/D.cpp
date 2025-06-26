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
    string p, s;
    cin >> p >> s;
    int i = 0, j = 0;
    if (p == s)
    {
        cout << "YES\n";
        return;
    }
    int np, ns, lp, ls, rp, rs;
    np = p.length();
    ns = s.length();
    lp = count(all(p), 'L');
    ls = count(all(s), 'L');
    rp = np - lp;
    rs = ns - ls;
    if ((np == ns && s != p) || (lp > ls || rp > rs) || (lp == 0 && ls != 0) || (rp == 0 && rs != 0))
    {
        cout << "NO\n";
        return;
    }
    if ((lp == np && ls < 2 * np) || (rp == np && rp < 2 * np))
    {
        cout << "YES\n";
        return;
    }

    while (i < np && j < ns)
    {
        if (j == sz(s))
            break;
        if (p[i] == s[j])
        {
            if (j + 1 < sz(s))
            {
                if (p[i] == s[j + 1])
                    j += 2;
                else
                    j++;
            }
            else
                j++;
            i++;
        }
        else
            break;
    }
    if (i<=np && j == ns && (p[i]==s[j-1]) ||p[i-1]==s[j-1])
        cout << "YES\n";
    else
        cout << "NO\n";
}

bool multi = true;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    if (multi)
        cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        solve(i);
    }
    return 0;
}