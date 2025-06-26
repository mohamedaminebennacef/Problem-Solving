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
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

        // horizantal arrangement for the three 3 rectangle
        if (l1 + l2 + l3 == b1 && b1 == b2 && b2 == b3)
            cout << "YES\n";
        // vertical arrangement for the three 3 rectangle
        else if (b1 + b2 + b3 == l1 && l1 == l2 && l2 == l3)
            cout << "YES\n";
        else if (l1 == l2 + l3 && l1 == b1 + b2 && b3 == b2 && b2 == b1)
            cout << "YES\n";
        else if (l1 + l2 == b1 && b1 == b2 + b3)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}