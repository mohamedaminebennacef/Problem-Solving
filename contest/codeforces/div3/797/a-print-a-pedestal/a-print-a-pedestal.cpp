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
int a[500005];

bool multi = true;

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
    {
        int n;
        cin >> n;
        int h1 = n / 3, r = n % 3;
        if (r == 2)
            cout << h1 + 1 << " " << h1 + 2 << " " << h1 - 1 << endl;
        else if (r == 1)
            cout << h1   << " " << h1 + 2 << " " << h1 - 1 << endl;
        else
            cout << h1 << " " << h1 + 1 << " " << h1 - 1 << endl;
    }
    return 0;
}