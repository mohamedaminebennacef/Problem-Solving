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

    int q = 1;
    if (multi)
        cin >> q;
    for (int i = 1; i <= q; ++i)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        if (s.length() == 1 && s != t && s!="1")
            cout << "NO\n";
        else if (s == t)
            cout << "YES\n";
        else
        {
            if (s.find('1')<=t.find('1'))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}